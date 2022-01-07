/******************************************************
Nama file: variabel2.cpp
*******************************************************/

#include <iostream>

int main() {
   // inisialisasi variabel
   int panjang = 5, lebar = 4;

   // inisialisasi dinamis
   int luas = panjang * lebar;

   // menampilkan informasi program
   std::cout<<"PERSEGI PANJANG"<<std::endl;

   // menampilkan nilai variabel
   std::cout<<"panjang = "<<panjang<<std::endl;
   std::cout<<"lebar = "<<lebar<<std::endl;

   // menampilkan hasil perhitungan
   std::cout<<"Luas persegi panjang = "<<luas<<std::endl;

   return 0;
}
