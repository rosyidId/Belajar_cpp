/******************************************************
Nama file: strcmp.cpp
*******************************************************/

#include <iostream>
#include <cstring>	// strcmp()

int main() {
   char s1[7] = "STRING";
   char s2[7] = "string";
   char s3[7] = "STRING";
   
   // menampilkan nilai variabel s1, s2, dan s3
   std::cout<<"s1: "<<s1<<std::endl;
   std::cout<<"s2: "<<s2<<std::endl;
   std::cout<<"s3: "<<s3<<std::endl;

   // membandingkan string
   std::cout<<"\nstrcmp(s1,s2): "<<strcmp(s1,s2)<<std::endl;
   std::cout<<"strcmp(s1,s3): "<<strcmp(s1,s3)<<std::endl;
   std::cout<<"strcmp(s2,s3): "<<strcmp(s2,s3)<<std::endl;
   
   return 0;
}
