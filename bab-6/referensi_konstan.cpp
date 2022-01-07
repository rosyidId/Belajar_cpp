/******************************************************
Nama file: referensi_konstan.cpp
*******************************************************/

#include <iostream>

int main() {
   int a {9};
   
   const int& refa {a};	// referensi konstan
      
   std::cout<<"Sebelum a diubah"<<std::endl;
   std::cout<<"Nilai a\t\t: "<<a<<std::endl;
   std::cout<<"Nilai refa\t: "<<refa<<std::endl;
   
   // refa = 11; 	// salah, referensi konstan tidak dapat diubah
   
   a = 10; // benar, nilai variabel a masih dapat diubah
   
   std::cout<<"\nSetelah a diubah"<<std::endl;
   std::cout<<"Nilai a\t\t: "<<a<<std::endl;
   std::cout<<"Nilai refa\t: "<<refa<<std::endl;     
      
   return 0;
}
