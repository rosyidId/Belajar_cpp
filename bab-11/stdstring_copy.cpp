/******************************************************
Nama file: stdstring_copy.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

int main() {
   size_t len;

   std::string s1 = "C++";
   char s2[2], s3[3];

   len = s1.copy(s2, 1);
   s2[len] = '\0';

   len = s1.copy(s3, 2, 1);
   s3[len] = '\0';

   std::cout<<"s1: "<<s1<<std::endl;
   std::cout<<"s2: "<<s2<<std::endl;
   std::cout<<"s3: "<<s3;
   
   return 0;
}
