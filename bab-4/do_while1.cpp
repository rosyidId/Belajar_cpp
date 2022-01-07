/******************************************************
Nama file: do_while1.cpp
*******************************************************/

#include <iostream>
#include <iomanip>	// std::fixed

int main() {   
   double a, b, c;

   std::cout<<"Masukkan nilai a: ";
   std::cin>>a;
   
   do {
      std::cout<<"Masukkan nilai b: ";
      std::cin>>b;
      if (b == 0) {
         std::cout<<"Nilai b tidak boleh nol."<<std::endl;
      }
   } while (b == 0);
   
   c = a / b;
   
   std::cout<<std::fixed;
   std::cout<<a<<" / "<<b<<" = "<<c;
   
   return 0; 
}
