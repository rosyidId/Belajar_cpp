/******************************************************
Nama file: stdstring_at.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

int main() {   
   std::string s = "Master C++";
   
   for (size_t i {0}; i<s.length(); i++) {
      if (s.at(i) == ' ') {
         std::cout<<std::endl;
       } else {
         std::cout<<s.at(i);
       }
   }
   
   return 0;
}
