/******************************************************
Nama file: null_terminated_string1.cpp
*******************************************************/

#include <iostream>
#include <cstring>	// strcpy()

int main() {
   // mendeklarasikan variabel bertipe string menggunakan array
   char teks[4];
   
   // mengisi nilai ke dalam variabel teks
   strcpy(teks, "C++");
   
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
