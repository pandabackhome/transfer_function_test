#include "test_function.h"
#include <iostream>

auto cout_function = [&](const std::string &word) -> void {
  std::cout << word << std::endl;
};

int main() {
  A a;
  a.set_function(cout_function);
  a.do_out_function();
  return 0;
}
