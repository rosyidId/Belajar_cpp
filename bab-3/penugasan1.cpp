/******************************************************
Nama file: penugasan1.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

int main() {
   int i {10};
   std::string s {"Pemrograman"};
   
   std::cout<<"Keadaan awal"<<std::endl;
   std::cout<<"Nilai i: "<<i<<std::endl;
   std::cout<<"Nilai s: "<<s<<std::endl;
   
   // menambah nilai i dengan 8
   i += 8;	// bisa ditulis: i = i + 8
   
   // menyambung string s
   s += " ";  	// spasi
   s += "C++";

   std::cout<<"\nKeadaan akhir"<<std::endl;
   std::cout<<"Nilai i: "<<i<<std::endl;
   std::cout<<"Nilai s: "<<s<<std::endl;

   return 0;
}
