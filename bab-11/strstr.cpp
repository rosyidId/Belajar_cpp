/******************************************************
Nama file: strstr.cpp
*******************************************************/

#include <iostream>
#include <cstring>	// strstr()

int main() {
   char s[16] = "Pemrograman C++";
   char sub[4] = "C++";	// substring yang akan dicari
   char *ptr;	// pointer ke karakter
      
   // mencari ss dalam s
   ptr = strstr(s, sub);
   
   // menampilkan nilai
   std::cout<<"s\t: "<<s<<std::endl;
   std::cout<<"sub\t: "<<sub<<std::endl;
   std::cout<<"\nSubstring \""<<sub
            <<"\" ditemukan pada indeks ke-"
            <<ptr-s
            <<std::endl;
      
   return 0;
}
