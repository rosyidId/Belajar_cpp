/******************************************************
Nama file: stdstring_insert.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

int main() {
   std::string s = "Menjadi Master C++";
   
   std::cout<<s<<std::endl;

   // menyisipkan string
   s.insert(0, "Mudah dan Cepat ");

   std::cout<<s<<std::endl;

   size_t indeks = s.find("dan");
   if (indeks != std::string::npos) {
      s.replace(indeks, 3, "&");
      std::cout<<s<<std::endl;
   }
   
   return 0;
}
