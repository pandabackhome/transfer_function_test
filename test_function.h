#include <functional>
#include <iostream>

class A {
public:
  using outFunction = std::function<void(const std::string &)>;
  void set_function(const outFunction &func);

  void do_out_function();

private:
  outFunction out_function_;
  const std::string a = "hello function";
};
