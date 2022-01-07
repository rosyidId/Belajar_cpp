/******************************************************
Nama file: cpp14_fungsi.cpp
*******************************************************/

#include <iostream>

auto f(int i) {
   return i+1;
}

int main() {
   // memanggil fungsi f()
   std::cout<<"f(1): "<<f(1)<<std::endl;
   std::cout<<"f(2): "<<f(2)<<std::endl;
   std::cout<<"f(3): "<<f(3)<<std::endl;   

   return 0;
}
