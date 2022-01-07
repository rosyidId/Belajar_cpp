/******************************************************
Nama file: if2kondisi.cpp
*******************************************************/

#include <iostream>

int main() {   
   int a;
   
   std::cout<<"Masukkan bilangan bulat: ";
   std::cin>>a;
   
   if (a % 2 == 0) {
      std::cout<<a<<" adalah bilangan genap"<<std::endl;
   } else {
      std::cout<<a<<" adalah bilangan ganjil"<<std::endl;
   }
   
   return 0; 
}
