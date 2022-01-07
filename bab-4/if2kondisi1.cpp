/******************************************************
Nama file: if2kondisi1.cpp
*******************************************************/

#include <iostream>

int main() {   
   int a;
   
   std::cout<<"Masukkan nilai a: ";
   std::cin>>a;
   
   if (a > 0) {
      std::cout<<a<<" adalah bilangan positif"<<std::endl;
   } else {
      std::cout<<a<<" bukan bilangan positif"<<std::endl;
   }
   
   return 0; 
}
