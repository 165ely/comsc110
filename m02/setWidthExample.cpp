// setw example
#include <iostream>     // std::cout, std::endl
#include <iomanip>      // std::setw

int main () {
  //std::cout << std::setw(3);
  std::cout << std::setw(3) << 1 << std::endl;
  std::cout << std::setw(3) << 22 << std::endl;
  std::cout << std::setw(3) << 777 << std::endl;
  return 0;
}