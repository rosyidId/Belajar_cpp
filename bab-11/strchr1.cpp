/******************************************************
Nama file: strchr1.cpp
*******************************************************/

#include <iostream>
#include <cstring>	// strchr()

int main() {
   char s[16] = "Pemrograman C++";
   char c = 'r';	// karakter yang akan dicari
   char *ptr;	// pointer ke karakter
      
   // menampilkan indeks dari masing-masing karakter 'r'
   // yang ditemukan dalam ptr
   std::cout<<"Karakter \'r\' dalam \""<<s<<"\":"<<std::endl;
   ptr = strchr(s, c);
   while (ptr != nullptr) {
      std::cout<<"ditemukan pada indeks ke-"
               <<ptr-s
               <<std::endl;
      ptr = strchr(ptr+1, c);
   }
      
   return 0;
}
