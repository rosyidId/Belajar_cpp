/******************************************************
Nama file: if1kondisi.cpp
*******************************************************/

#include <iostream>
#include <cstdlib>	// exit()
#include <iomanip>	// std::fixed

int main() {   
   double a, b, c;
   
   std::cout<<"Masukkan nilai a: ";
   std::cin>>a;
   std::cout<<"Masukkan nilai b: ";
   std::cin>> b;
   
   if (b == 0) {
      std::cout<<"KESALAHAN: Nilai b tidak boleh nol."<<std::endl;
      exit(1);	// keluar program
   }
   
   c = a / b;
   
   std::cout<<std::fixed;
   std::cout<<a<<" / "<<b<<" = "<<c<<std::endl;
   
   return 0; 
}
