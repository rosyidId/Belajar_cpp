/******************************************************
Nama file: do_while.cpp
*******************************************************/

#include <iostream>

int main() {   
   int i;

   std::cout<<"Menggunakan while:"<<std::endl;
   i = -10;
   while (i > 0) {
      std::cout<<i<<std::endl;
      i--;
   }

   std::cout<<std::endl;

   std::cout<<"Menggunakan do-while:"<<std::endl;
   i = -10;
   do {
      std::cout<<i<<std::endl;
      i--;
   } while (i > 0);
   
   return 0; 
}
