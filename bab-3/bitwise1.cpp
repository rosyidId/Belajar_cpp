/******************************************************
Nama file: bitwise1.cpp
*******************************************************/

#include <iostream>

int main() {
   char x {12};

   std::cout<<(int) x<<" >> 1 \t= "
            <<(x >> 1)<<std::endl;
   std::cout<<(int) x<<" >> 2 \t= "
            <<(x >> 2)<<std::endl;
   std::cout<<(int) x<<" << 1 \t= "
            <<(x << 1)<<std::endl;
   std::cout<<(int) x<<" << 2 \t= "
            <<(x << 2)<<std::endl;

   return 0;
}
