/******************************************************
Nama file: alamat_referensi.cpp
*******************************************************/

#include <iostream>

int main() {
   int a {9};
   int& refa {a};
      
   std::cout<<"Nilai a\t\t: "<<a<<std::endl;
   std::cout<<"Alamat a\t: "<<&a<<std::endl;
   std::cout<<"Nilai refa\t: "<<refa<<std::endl;
   std::cout<<"Alamat refa\t: "<<&refa<<std::endl;
      
   return 0;
}
