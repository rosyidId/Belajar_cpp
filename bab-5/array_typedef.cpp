/******************************************************
Nama file: array_typedef.cpp
*******************************************************/

#include <iostream>

typedef int Array[5]; 

int main() {
   Array a, b, c, d;
   
   // mengisi nilai ke dalam array a, b, c, dan d
   for (auto i {0}; i<5; i++) {
      a[i] = i+1;
      b[i] = (i+1) * 10;
      c[i] = (i+1) * 100;
      d[i] = (i+1) * 1000;
   }
   
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
   
   // menampilkan elemen array c
   std::cout<<"\nIsi array c: ";
   for (auto e: c) {
      std::cout<<e<<" ";
   }
   
   // menampilkan elemen array a
   std::cout<<"\nIsi array d: ";
   for (auto e: d) {
      std::cout<<e<<" ";
   }

   return 0;
}
