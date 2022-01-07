/******************************************************
Nama file: inisialisasi_array1.cpp
*******************************************************/

#include <iostream>

int main() {
   // inisialisasi array a
   int a[5] = {2,3,4};
   
   // menampilkan elemen array a
   std::cout<<"Isi array a: ";
   for (auto e: a) {
     std::cout<<e<<" ";
   }   

   return 0;
}
