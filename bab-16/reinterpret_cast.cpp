/******************************************************
Nama file: reinterpret_cast.cpp
*******************************************************/

#include <iostream>

int main() {
   int x = 10;
   int *p;

   // melakukan typecasting 
   // dari tipe int ke pointer
   p = reinterpret_cast<int *> (x);

   // Menampilkan nilai p
   std::cout<<"Nilai p: "<<p<<std::endl;

   return 0;
}
