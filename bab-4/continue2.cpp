/******************************************************
Nama file: continue2.cpp
*******************************************************/

#include <iostream>
#include <iomanip>	// std::fixed

int main() {   
   int a, b, c;
   
   std::cout<<"Masukkan nilai a: ";
   std::cin>>a;
   
   while (true) {
      std::cout<<"Masukkan nilai b: ";
      std::cin>>b;
      
      if (b == 0) {
        std::cout<<"Nilai b tidak boleh nol."<<std::endl;
        continue;
      }

      break; // pengulangan berhenti ketika b tidak bernilai 0
   }
   
   c = a / b;
   
   std::cout<<std::fixed<<std::endl;
   std::cout<<a<<" / "<<b<<" = "<<c<<std::endl;
   
   return 0; 
}
