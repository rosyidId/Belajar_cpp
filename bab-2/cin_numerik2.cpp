/******************************************************
Nama file: cin_numerik2.cpp
*******************************************************/

#include <iostream>

int main() {
   // mendeklarasikan variabel
   int panjang, lebar, luas;

   // menampilkan informasi program
   std::cout<<"PERSEGI PANJANG"<<std::endl;

   // membaca data panjang dan lebar
   std::cout<<"Masukkan panjang\t: ";
   std::cin>>panjang;
   std::cout<<"Masukkan lebar\t\t: ";
   std::cin>>lebar;

   // melakukan perhitungan dan menampung hasilnya
   // ke dalam variabel luas
   luas = panjang * lebar;

   // menampilkan hasil perhitungan
   std::cout<<std::endl;
   std::cout<<"Luas persegi panjang = "<<luas<<std::endl;

   return 0;
}
