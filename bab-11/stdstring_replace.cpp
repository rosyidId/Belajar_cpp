/******************************************************
Nama file: stdstring_replace.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

int main() {
   std::string s = "Belajar C, C++, Java, dan Python";
   
   std::cout<<s<<std::endl;

   std::cout<<s.replace(0,7,"Pemrograman")<<std::endl;

   size_t indeks = s.find("Python");
   if (indeks != std::string::npos) {
      std::cout<<s.replace(indeks,6,"Ruby");
   }
   
   return 0;
}
