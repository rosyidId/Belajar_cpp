/******************************************************
Nama file: stdstring_begin_end.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

int main() {   
   std::string s = "Master C++";   
   
   for (std::string::iterator it {s.begin()}; it!=s.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   return 0;
}
