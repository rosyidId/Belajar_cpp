/******************************************************
Nama file: logika_not.cpp
*******************************************************/

#include <iostream>

int main() {
   int x;
   bool genap;
   
   std::cout<<"Masukkan bilangan bulat: ";
   std::cin>>x;
   
   genap = (x % 2 == 0);
   
   if (!genap) // ! bukan
   {
      std::cout<< x <<" adalah bilangan ganjil"<<std::endl;
   } 
   else 
   {
      std::cout<< x <<" adalah bilangan genap"<<std::endl;
   }

   return 0;
}
