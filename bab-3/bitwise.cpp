/******************************************************
Nama file: bitwise.cpp
*******************************************************/

#include <iostream>

int main() {
   char a {12}, b {10};		// 8-bit

   std::cout<<"a \t= "<<(int) a<<std::endl;
   std::cout<<"b \t= "<<(int) b<<std::endl;
   std::cout<<"a & b \t= "<<(a & b)<<std::endl;
   std::cout<<"a | b \t= "<<(a | b)<<std::endl;
   std::cout<<"a ^ b \t= "<<(a ^ b)<<std::endl;
   std::cout<<"~a \t= "<<(~a)<<std::endl;

   return 0;
}
