/******************************************************
Nama file: cpp11_nullptr.cpp
*******************************************************/

#include <iostream>

void f(int x) {
  std::cout<<"f() dengan parameter int"<<std::endl;
}

void f(int *p) {
  std::cout<<"f() dengan parameter pointer"<<std::endl;
}

int main() {
   std::cout<<"f(0)\t\t: ";
   f(0);
   
   //std::cout<<"f(NULL)\t: ";
   //f(NULL);	// menyebabkan kesalahan

   std::cout<<"f(nullptr)\t: ";
   f(nullptr);

   return 0;
}
