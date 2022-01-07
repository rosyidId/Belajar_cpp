/******************************************************
Nama file: stdstring_capacity.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

int main() {
   std::string s = "Master C++";

   std::cout<<"s: "<<s<<std::endl;
   std::cout<<"s.size(): "
            <<s.size()
            <<std::endl;
   std::cout<<"s.length(): "
            <<s.length()
            <<std::endl;
   std::cout<<"s.capacity(): "
            <<s.capacity()
            <<std::endl;
   std::cout<<"s.max_size(): "
            <<s.max_size()
            <<std::endl;
   
   return 0;
}
