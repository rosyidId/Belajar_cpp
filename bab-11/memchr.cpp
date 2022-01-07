/******************************************************
Nama file: memchr.cpp
*******************************************************/

#include <iostream>
#include <cstring>	// memchr() dan strlen()

int main() {
   char s[16] = "Pemrograman C++";
   char c = 'C';	// karakter yang akan dicari
   char *ptr;	// pointer ke karakter
   
   // mencari karakter 'C' di dalam s
   ptr = (char *) memchr(s, c, strlen(s));
   
   std::cout<<"s\t: "<<s<<std::endl;
   std::cout<<"ptr\t: "<<ptr<<std::endl;
      
   std::cout<<"\nKarakter \'C\' ";   
   if (ptr != nullptr) {
      std::cout<<"ditemukan pada indeks ke-"
               <<ptr-s
               <<std::endl;      
   } else {
      std::cout<<"tidak ditemukan"<<std::endl;
   }
      
   return 0;
}
