/******************************************************
Nama file: sambung_cppstring.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

int main() {
   std::string s1 = "Master";
   std::string s2 = "C++";

   std::string s3 = s1 + " " + s2;
   std::cout<<"s1: "<<s1<<std::endl;
   std::cout<<"s2: "<<s2<<std::endl;
   std::cout<<"s3: "<<s3<<std::endl;
   
   return 0;
}
