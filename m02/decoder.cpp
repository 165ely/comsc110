/* getchar example : Decoder */
#include <iostream>
#include <stdio.h>

int main ()
{
  int c;
  puts ("Enter text. ");
  while(true) {
    c=getchar();
    std::cout << c << std::endl;
  }
  return 0;
}