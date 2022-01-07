/******************************************************
Nama file: stdstring_append.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

int main() {
   std::string s;
   std::string s1 = "Master";
   std::string s2 = "Pemrograman C++";

   s.append(s1);
   s.append(s2, 11, 4);

   std::cout<<"s: "<<s;
   
   return 0;
}
