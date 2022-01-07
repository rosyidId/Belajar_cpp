/******************************************************
Nama file: strcspn.cpp
*******************************************************/

#include <iostream>
#include <cstring>	// strcspn()

int main() {
   char s1[] = "Pemrograman C++17";
   char s2[] = "0123456789";

   int indeks = strcspn(s1, s2);
  
   std::cout<<"Angka pertama dalam s1 "
            <<"ditemukan pada indeks ke-"
            <<indeks;
      
   return 0;
}
