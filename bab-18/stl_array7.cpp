/******************************************************
Nama file: stl_array7.cpp
*******************************************************/

#include <iostream>
#include <array>	// std::array

int main() {   
   std::array<std::string, 4> a = {"C","C++","Python","Ruby"};
   
   std::string s = "C++";	// elemen yang dicari
   int indeks = -1, i=0;
   
   for (auto it = a.begin(); it != a.end(); ++it, i++) {
      if ((*it).compare(s) == 0) {
         indeks = i;         
         break;
      }
   }
   
   if (indeks > -1) {
      std::cout<<s<<" ditemukan pada indeks ke-"<<indeks<<std::endl;
   } else {
      std::cout<<s<<" tidak ditemukan"<<std::endl;
   }
   
   return 0;
}
