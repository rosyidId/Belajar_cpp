/******************************************************
Nama file: memcmp.cpp
*******************************************************/

#include <iostream>
#include <cstring>	// memcmp()

int main() {
   char s1[7] = "STRING";
   char s2[7] = "string";
   char s3[7] = "string";
   int n1, n2, n3;
   
   n1 = memcmp(s1, s2, sizeof(s1));
   n2 = memcmp(s2, s3, sizeof(s2));
   n3 = memcmp(s3, s1, sizeof(s3));
  
   std::cout<<"n1: "<<n1<<std::endl;
   std::cout<<"n2: "<<n2<<std::endl;
   std::cout<<"n3: "<<n3<<std::endl;
      
   return 0;
}
