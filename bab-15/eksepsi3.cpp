/******************************************************
Nama file: eksepsi3.cpp
*******************************************************/

#include <iostream>
#include <stdexcept>	// std::out_of_range

int main() {   
   int a[5] = {10,20,30,40,50};
   int indeks;
   
   std::cout<<"Masukkan indeks array: ";
   std::cin>>indeks;
   
   // mencegah pembagian dengan 0
   try {
      if (indeks < 0 || indeks > 4) {
         throw std::out_of_range("Kesalahan: indeks di luar rentang");
      }
      std::cout<<"Elemen ke-"<<indeks<<": "<<a[indeks];
   } catch (std::out_of_range e) {
      std::cout<<e.what();
   }   

   return 0;
}
