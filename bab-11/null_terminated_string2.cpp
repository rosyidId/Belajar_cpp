/******************************************************
Nama file: null_terminated_string2.cpp
*******************************************************/

#include <iostream>
#include <cstring>	// strcpy()

int main() {
   // mendeklarasikan variabel bertipe string menggunakan pointer
   char *teks;
   
   // alokasi memori
   teks = new char[4];
   
   // mengisi nilai ke dalam variabel teks
   strcpy(teks, "C++");
   
   std::cout<<teks<<std::endl;
   
   // dealokasi memori
   delete [] teks;
   
   return 0;
}
