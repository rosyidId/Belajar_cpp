/******************************************************
Nama file: eksepsi6.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

int main() {   
   std::string nama;
   double berat;
   
   std::cout<<"Masukkan nama: ";
   getline(std::cin, nama);
   std::cout<<"Masukkan berat badan: ";
   std::cin>>berat;
   
   try {
      if (berat <= 0) throw berat;
      std::cout<<nama<<" ("<<berat<<" kg)";
   } catch (double e) {
      std::cout<<"Nilai "<<e<<" tidak diperbolehkan";
   }

   return 0;
}
