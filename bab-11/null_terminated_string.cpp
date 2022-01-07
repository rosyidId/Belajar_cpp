/******************************************************
Nama file: null_terminated_string.cpp
*******************************************************/

#include <iostream>
#include <cstring>	// strcpy()

int main() {
   // mendeklarasikan variabel bertipe string menggunakan array
   char teks[4];
   
   // mengisi nilai ke dalam variabel teks
   strcpy(teks, "C++");
   
   std::cout<<teks<<std::endl;
   
   return 0;
}
