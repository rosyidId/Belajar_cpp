/******************************************************
Nama file: non_referensi.cpp
*******************************************************/

#include <iostream>

int main() {
   int data[] {10, 20, 30, 40, 50};

   std::cout<<"Isi array data sebelum diubah:"
            <<std::endl;
   for (auto e: data) {
      std::cout<<e<<" ";
   }
   
   // mengubah elemen-elemen array 
   std::cout<<"\n\nNilai e di dalam pengulangan:"
            <<std::endl;
   for (auto e: data) {
      e *= 100;
      std::cout<<e<<" ";
   }
   
   std::cout<<"\n\nIsi array data setelah diubah:"
            <<std::endl;
   for (auto e: data) {
      std::cout<<e<<" ";
   }
   
   return 0;
}
