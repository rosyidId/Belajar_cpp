/******************************************************
Nama file: cpp11_auto1.cpp
*******************************************************/

#include <iostream>

int main() {   
   std::cout<<"Genap\tGanjil"<<std::endl;
   for (auto i=0; i<10; i++) {
      std::cout<<i<<"\t";
      if (i % 2 == 0) {
         continue;
      }
      std::cout<<std::endl;
   }

   return 0;
}
