/******************************************************
Nama file: stdstring_data.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

int main() {   
   std::string cppstring = "Master C++";
   char *cstring;
   
   // mengonversi std::string ke string gaya C
   // dan menempatkannya ke variabel cstring
   cstring = cppstring.data();
   
   // mengisi karakter null di akhir cstring
   cstring[cppstring.length()] = '\0';
   
   std::cout<<"cppstring: "<<cppstring<<std::endl;
   std::cout<<"cstring: "<<cstring<<std::endl;
   
   return 0;
}
