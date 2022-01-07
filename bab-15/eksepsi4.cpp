/******************************************************
Nama file: eksepsi4.cpp
*******************************************************/

#include <iostream>
#include <stdexcept>	// std::overflow_error

double bagi(double a, double b) {
   if (b == 0) 
      throw std::overflow_error("Kesalahan: nilai b tidak boleh nol");
   return a / b;
}

int main() {   
   double a, b;
   
   std::cout<<"Masukkan nilai a: ";
   std::cin>>a;
   std::cout<<"Masukkan nilai b: ";
   std::cin>>b;
   
   try {   
      double hasil = bagi(a,b);	// memanggil fungsi bagi()
      std::cout<<"Hasil bagi: "
               <<hasil;
   } catch (std::overflow_error e) {
      std::cout<<e.what();
   }   

   return 0;
}
