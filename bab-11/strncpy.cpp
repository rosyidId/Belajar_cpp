/******************************************************
Nama file: strncpy.cpp
*******************************************************/

#include <iostream>
#include <cstring>	// strncpy()

int main() {
   char s1[12];
   char* s2 = (char*) "Pemrograman C++";

   // menyalin 11 karakter
   // dari variabel s2 ke variabel s1
   strncpy(s1, s2, 11);

   // Menampilkan nilai dari variabel s1 dan s2
   std::cout<<"s1: "<<s1<<std::endl;
   std::cout<<"s2: "<<s2<<std::endl;
   
   return 0;
}
