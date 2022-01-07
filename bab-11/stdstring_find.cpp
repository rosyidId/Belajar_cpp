/******************************************************
Nama file: stdstring_find.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

std::string s = 
"C++ adalah bahasa pemrograman \
yang populer dan banyak digunakan, \
selain bahasa C dan Java";

int main() {   
   size_t indeks1 = s.find("bahasa");
   if (indeks1 != std::string::npos) {
      std::cout<<"'bahasa' pertama "
               <<"ditemukan pada indeks ke-"<<indeks1
               <<std::endl;
   }

   size_t indeks2 = s.find("bahasa", indeks1+1);
   if (indeks2 != std::string::npos) {
      std::cout<<"'bahasa' kedua "
               <<"ditemukan pada indeks ke-"<<indeks2
               <<std::endl;
   }

   size_t indeks3 = s.find("C dan Java");
   if (indeks3 != std::string::npos) {
      std::cout<<"'C dan Java' "
               <<"ditemukan pada indeks ke-"<<indeks3
               <<std::endl;
   }
   
   return 0;
}
