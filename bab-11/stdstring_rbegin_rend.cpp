/******************************************************
Nama file: stdstring_rbegin_rend.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

int main() {   
   std::string s = "Master C++";   
   
   for (std::string::reverse_iterator it {s.rbegin()}; 
        it!=s.rend(); ++it) {
      std::cout<<*it<<" ";
   }
   
   return 0;
}
