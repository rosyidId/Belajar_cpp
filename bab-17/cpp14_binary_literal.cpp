/******************************************************
Nama file: cpp14_binary_literal.cpp
*******************************************************/

#include <iostream>

int main() {
   int a = 0B110101111;	// 431
   int b = 0b100100011U;	// 291U
   int c = 0b1010L;		// 10L

   std::cout<<"a: "<<a<<std::endl;
   std::cout<<"b: "<<b<<std::endl;
   std::cout<<"c: "<<c<<std::endl;   

   return 0;
}
