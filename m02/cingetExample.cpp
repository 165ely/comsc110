// istream::get example
#include <iostream>     // std::cin, std::cout
#include <fstream>      // std::ifstream
//using namespace;

int main () {
  char str[256];

  std::cout << "Enter a name: ";
  //std::cin.get (str,256);    // get c-string
  std::cin.get();
  std::cout << str;
  std::cout << "\nExit";

  return 0;
}