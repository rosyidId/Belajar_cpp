/******************************************************
Nama file: konversi_eksplisit1.cpp
*******************************************************/

#include <iostream>
#include <iomanip>	// std::fixed

int main() {
   int alas, tinggi;
   float luas;
   
   std::cout<<"SEGITIGA"<<std::endl;
   std::cout<<"Masukkan nilai alas: ";
   std::cin>>alas;
   std::cout<<"Masukkan nilai tinggi: ";
   std::cin>>tinggi;
   
   luas = (float) alas * tinggi / 2;
   
   // menampilkan luas segitiga
   std::cout<<std::fixed;
   std::cout<<"\nLuas segitiga = "<<luas<<std::endl;   

   return 0;
}
