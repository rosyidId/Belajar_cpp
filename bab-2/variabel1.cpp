/******************************************************
Nama file: variabel1.cpp
*******************************************************/

#include <iostream>

int main() {
   // mendeklarasikan variabel
   int panjang;
   int lebar;
   int luas;

   // mengisi nilai ke dalam variabel
   panjang = 8;
   lebar = 6;

   // melakukan perhitungan dan menampung hasilnya
   // ke dalam variabel luas
   luas = panjang * lebar;

   // menampilkan informasi program
   std::cout<<"PERSEGI PANJANG"<<std::endl;

   // menampilkan nilai variabel
   std::cout<<"panjang = "<<panjang<<std::endl;
   std::cout<<"lebar = "<<lebar<<std::endl;

   // menampilkan hasil perhitungan
   std::cout<<"Luas persegi panjang = "<<luas<<std::endl;

   return 0;
}
