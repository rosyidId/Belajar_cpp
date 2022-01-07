/******************************************************
Nama file: cin_karakter1.cpp
*******************************************************/

#include <iostream>

int main() {
   // mendeklarasikan variabel
   int panjang, lebar, luas;
   char jawab;

   // menampilkan informasi program
   std::cout<<"PERSEGI PANJANG"<<std::endl;
   
   do {
      // membaca data panjang dan lebar
      std::cout<<"Masukkan panjang\t: ";
      std::cin>>panjang;
      std::cout<<"Masukkan lebar\t\t: ";
      std::cin>>lebar;

      luas = panjang * lebar;

      std::cout<<"Luas persegi panjang = "<<luas
               <<std::endl<<std::endl;
      std::cout<<"Hitung lagi (Y=Ya)? ";
      std::cin>>jawab;
      std::cout<<std::endl;
    } while (jawab == 'Y' || jawab == 'y');

   return 0;
}
