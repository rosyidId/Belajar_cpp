/******************************************************
Nama file: stdstring_substr.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

int main() {
   std::string s = "Pemrograman C dan C++";
   
   std::cout<<"s\t\t: "<<s<<std::endl;
   std::cout<<"s.substr()\t: "<<s.substr()<<std::endl;
   std::cout<<"s.substr(0,11)\t: "<<s.substr(0,11)<<std::endl;
   std::cout<<"s.substr(12,9)\t: "<<s.substr(12,9);
   
   return 0;
}
