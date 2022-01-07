/******************************************************
Nama file: reinterpret_cast1.cpp
*******************************************************/

#include <iostream>

int main() {
   // mendeklarasikan variabel 
   // bertipe int
   int i = 65;
   char *pc;

   // mendeklarasikan pointer 
   // yang menunjuk ke tipe int
   int *pi = &i;

   // melakukan typecasting 
   // dari tipe pointer bertipe int ke pointer bertipe char
   pc = reinterpret_cast<char*> (pi);

   // menampilkan nilai pi dan pc
   std::cout<<"Nilai pi: "<<pi<<std::endl;
   std::cout<<"Nilai pc: "<<pc<<std::endl;

   return 0;
}
