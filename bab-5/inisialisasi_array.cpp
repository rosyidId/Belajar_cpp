/******************************************************
Nama file: inisialisasi_array.cpp
*******************************************************/

#include <iostream>

int main() {
   // inisialisasi array a
   int a[5] = {10, 20, 30, 40, 50};
   
   // inisialisasi array b
   int b[] = {2, 3, 4};
  
   // menampilkan elemen array a
   std::cout<<"Isi array a: ";
   for (auto e: a) {
     std::cout<<e<<" ";
   }
   
   // menampilkan elemen array b
   std::cout<<"\nIsi array b: ";
   for (auto e: b) {
     std::cout<<e<<" ";
   }   

   return 0;
}
