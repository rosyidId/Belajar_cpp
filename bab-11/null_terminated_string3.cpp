/******************************************************
Nama file: null_terminated_string3.cpp
*******************************************************/

#include <iostream>
#include <cstring>	// strcpy()

int main() {
   // mendeklarasikan variabel bertipe string menggunakan pointer
   char *teks {(char *) "C++"};	// alokasi memori dilakukan secara otomatis  
      
   for (size_t i {0}; i<4; i++) {
      std::cout<<"teks["<<i<<"]: ";
      if (teks[i] != '\0') {
         std::cout<<teks[i];
      } else {
         std::cout<<"\\0";
      }
      std::cout<<std::endl;
   }   
   
   return 0;
}
