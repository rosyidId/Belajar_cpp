/******************************************************
Nama file: cpp11_decltype.cpp
*******************************************************/

#include <iostream>

int main() {   
   auto x = 4;
   decltype(x) y = x;
  
   printf("Tipe x: %s, Tipe y: %s\n",
          typeid(x).name(),
          typeid(y).name());
    
   std::cout<<"x: "<<x<<std::endl;
   std::cout<<"y: "<<y<<std::endl;

   return 0;
}
