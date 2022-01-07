/******************************************************
Nama file: stdstring_assign.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

int main() {   
   char cstring[] = "C-style string";
   std::string cppstring = "C++ string";   
   std::string s;
   
   s.assign(cstring);
   std::cout<<s<<std::endl;
   
   s.assign(cstring, 7);
   std::cout<<s<<std::endl;
   
   s.assign(cppstring);
   std::cout<<s<<std::endl;

   s.assign(cppstring, 0, 3);
   std::cout<<s<<std::endl;
   
   s.assign(5, '*');
   std::cout<<s<<std::endl;
   
   return 0;
}
