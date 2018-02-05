#include <iostream> // std::cout

#ifdef FOO_WITH_A
# include <a/a.hpp>
#endif // FOO_WITH_A

#include <b/b.hpp>

int main() {
  std::cout << "Running 'a' module" << std::endl;
#ifdef FOO_WITH_A
  a::a a_module;
  a_module.Run();
#else
  std::cout << "(Module 'a' disabled)" << std::endl;
#endif


  std::cout << "Running 'b' module" << std::endl;
  b::b b_module;
  b_module.Run();
}
