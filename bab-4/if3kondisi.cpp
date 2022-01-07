/******************************************************
Nama file: if3kondisi.cpp
*******************************************************/

#include <iostream>

int main() {   
   int a;
   
   std::cout<<"Masukkan nilai a: ";
   std::cin>>a;
   
   if (a > 0) {
      std::cout<<a<<" adalah bilangan positif"<<std::endl;
   } else if (a == 0) {
      std::cout<<"Anda memasukkan bilangan 0"<<std::endl;
   } else {
      std::cout<<a<<" adalah bilangan negatif"<<std::endl;
   }
   
   return 0; 
}
