/******************************************************
Nama file: union.cpp
*******************************************************/

#include <iostream>

union bilangan {
   int integer;
   double real;
};

int main() {
   bilangan a, b;
   int mode;
   
   std::cout<<"PROGRAM PEMBAGIAN"<<std::endl;
   std::cout<<"[1] Pembagian bilangan bulat"<<std::endl;
   std::cout<<"[2] Pembagian bilangan riil"
            <<std::endl<<std::endl;
   std::cout<<"Masukkan pilihan Anda: ";
   std::cin>>mode;
   
   if (mode == 1) {
      std::cout<<"\nPembagian Bilangan Bulat"<<std::endl;
      std::cout<<"Masukkan nilai a: ";
      std::cin>>a.integer;
      std::cout<<"Masukkan nilai b: ";
      std::cin>>b.integer;
      std::cout<<"\nHasil bagi = "
               <<(a.integer / b.integer)<<std::endl;
   } else if (mode == 2) {
      std::cout<<"\nPembagian Bilangan Riil"<<std::endl;
      std::cout<<"Masukkan nilai a: ";
      std::cin>>a.real;
      std::cout<<"Masukkan nilai b: ";
      std::cin>>b.real;
      std::cout<<"\nHasil bagi = "
               <<(a.real / b.real)<<std::endl;
   } else {
      std::cout<<"Pilihan tidak tersedia.";      
   }

   return 0;
}
