/******************************************************
Nama file: strchr.cpp
*******************************************************/

#include <iostream>
#include <cstring>	// strchr()

int main() {
   char s[16] = "Pemrograman C++";
   char c = 'C';	// karakter yang akan dicari
   char *ptr;	// pointer ke karakter
   
   // mencari karakter 'C' dalam s
   ptr = strchr(s, c);
   
   // menampilkan nilai ptr
   std::cout<<ptr<<std::endl;
      
   return 0;
}
