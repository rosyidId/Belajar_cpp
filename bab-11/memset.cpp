/******************************************************
Nama file: memset.cpp
*******************************************************/

#include <iostream>
#include <cstring>	// memset()

int main() {
   char s[] = "$ ls -la";
   
   std::cout<<"Keadaan awal"<<std::endl;
   std::cout<<"s: "<<s<<std::endl;
  
   // mengganti karakter '$' dengan '>'
   memset(s, '>', 1);
  
   std::cout<<"\nKeadaan akhir"<<std::endl;
   std::cout<<"s: "<<s<<std::endl;
      
   return 0;
}
