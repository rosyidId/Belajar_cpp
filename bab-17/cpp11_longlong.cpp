/******************************************************
Nama file: cpp11_longlong.cpp
*******************************************************/

#include <iostream>

int main() {   
   long long x;
   unsigned long long y;

   // mengisi nilai x dengan akhiran LL
   x = -123000456000789LL;

   // mengisi nilai y dengan akhiran ULL
   y = 123000456000789ULL;

   std::cout<<"x: "<<x<<std::endl;
   std::cout<<"y: "<<y<<std::endl;

   return 0;
}
