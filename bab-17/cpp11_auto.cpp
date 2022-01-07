/******************************************************
Nama file: cpp11_auto.cpp
*******************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <typeinfo>

int main() {   
   auto x = 5;	  
   auto y = 2.34;
   auto z = "C++11";

   printf("Tipe x: %s, Tipe y: %s, Tipe z: %s\n",
          typeid(x).name(), 
          typeid(y).name(), 
          typeid(z).name());

   std::cout<<"Ukuran x: "<<sizeof(x)<<std::endl;
   std::cout<<"Ukuran y: "<<sizeof(y)<<std::endl;
   std::cout<<"Panjang string z: "
            <<strlen(z);

   return 0;
}
