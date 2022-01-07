/******************************************************
Nama file: cstring_ke_cppstring.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

int main() {
   char cstring[] = "C++";
   std::string cppstring(cstring);
  
   std::cout<<"cppstring: "<<cppstring<<std::endl;
   std::cout<<"Jumlah karakter: "<<cppstring.size()<<std::endl;
   
   return 0;
}
