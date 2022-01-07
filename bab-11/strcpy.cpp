/******************************************************
Nama file: strcpy.cpp
*******************************************************/

#include <iostream>
#include <cstring>	// strcpy()

int main() {
   char s1[50];
   char* s2 = (char*) "Pemrograman C++";

   // menyalin string
   // dari variabel s2 ke variabel s1
   strcpy(s1, s2);

   // Menampilkan nilai dari variabel s1 dan s2
   std::cout<<"s1: "<<s1<<std::endl;
   std::cout<<"s2: "<<s2<<std::endl;
   
   return 0;
}
