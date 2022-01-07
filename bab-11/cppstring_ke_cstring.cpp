/******************************************************
Nama file: cppstring_ke_cstring.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string
#include <cstring>	// strcpy(), strlen()

int main() {
   std::string cppstring {"C++"};
   char cstring[4];

   // mengisi nilai cppstring ke variabel bertipe char[]
   strcpy(cstring, cppstring.c_str());
   
   std::cout<<"cppstring: "<<cppstring<<std::endl;
   //std::cout<<"strlen(cppstring): "
   //         <<strlen(cppstring)		// salah
   //         <<std::endl;
   std::cout<<"cppstring.size(): "
            <<cppstring.size()
            <<std::endl;
   std::cout<<"\ncstring: "<<cstring<<std::endl;
   std::cout<<"strlen(cstring): "
            <<strlen(cstring)
            <<std::endl;
   
   return 0;
}
