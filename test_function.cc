#include "test_function.h"

void A::set_function(const outFunction &func) {
  out_function_ = std::move(func);
}

void A::do_out_function() {
  if (out_function_) {
    out_function_(a);
  }
}
