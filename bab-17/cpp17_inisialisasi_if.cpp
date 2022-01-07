/******************************************************
Nama file: cpp17_inisialisasi_if.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

int main() {
   std::string s {"Pemrograman C++"};
   
   // sebelum C++17
   std::cout<<"Sebelum C++17:"<<std::endl;
   auto index = s.find('z');
   if (index != std::string::npos) {
      std::cout<<"Karakter 'z' ditemukan pada posisi "
               <<index<<std::endl;
   } else {
      std::cout<<"Karakter 'z' tidak ditemukan"<<std::endl;
   }
   
   // if gaya C++17
   std::cout<<"\nDalam C++17:"<<std::endl;   
   if (auto index1 = s.find('C'); index1 != std::string::npos) {
      std::cout<<"Karakter 'C' ditemukan pada posisi "
               <<index1<<std::endl;
   } else {
      std::cout<<"Karakter 'C' tidak ditemukan"<<std::endl;
   }   

   return 0;
}
