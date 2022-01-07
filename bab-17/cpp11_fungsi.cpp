/******************************************************
Nama file: cpp11_fungsi.cpp
*******************************************************/

#include <iostream>

auto kali(int a, int b) -> int {
  return a * b;
}

int main() {

   std::cout<<"2 * 3 = "<<kali(2, 3)<<std::endl;
   std::cout<<"4 * 5 = "<<kali(4, 5)<<std::endl;

   return 0;
}
