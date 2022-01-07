/******************************************************
Nama file: eksepsi1.cpp
*******************************************************/

#include <iostream>
#include <cstdlib>	// exit(), EXIT_FAILURE

int main() {   
   double a, b;
   
   std::cout<<"Masukkan nilai a: ";
   std::cin>>a;
   std::cout<<"Masukkan nilai b: ";
   std::cin>>b;
   
   // mencegah pembagian dengan 0
   if (b == 0) {
      std::cout<<"Kesalahan: nilai b tidak boleh nol"<<std::endl;
      exit(EXIT_FAILURE);
   }
   
   std::cout<<"Hasil bagi: "<<a/b;

   return 0;
}
