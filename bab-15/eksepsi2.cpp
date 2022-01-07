/******************************************************
Nama file: eksepsi2.cpp
*******************************************************/

#include <iostream>
#include <stdexcept>	// std::overflow_error

int main() {   
   double a, b;
   
   std::cout<<"Masukkan nilai a: ";
   std::cin>>a;
   std::cout<<"Masukkan nilai b: ";
   std::cin>>b;
   
   // mencegah pembagian dengan 0
   try {
      if (b == 0) {
         throw std::overflow_error("Kesalahan: nilai b tidak boleh nol");
      }
      std::cout<<"Hasil bagi: "<<a/b;
   } catch (std::overflow_error e) {
      std::cout<<e.what();
   }   

   return 0;
}
