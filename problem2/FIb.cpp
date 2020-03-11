int constexpr n_terms = 50;
#include <iostream>
long long fib(long long n) {
  return (n == 1 || n == 0) ? 1 : fib(n - 1) + fib(n - 2);
}
int main() {
  printf("The first %i terms of the fibonacci numbers.\n", n_terms);
  for (int i = 0; i <= n_terms; i++) {
    std::cout << fib(i) << std::endl;
  }
  return 0;
}
