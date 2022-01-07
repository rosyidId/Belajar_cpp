/******************************************************
Nama file: cpp11_range_based_for1.cpp
*******************************************************/

#include <iostream>

int main() {
   int a[5] = {100, 200, 300, 400, 500};

   std::cout<<"Sebelum diubah: ";
   for (auto i: a) {
      std::cout<<i<< '\t';
   }

   std::cout<<"\nSetelah diubah: ";
   for (auto& i: a) {
      i /= 10;
      std::cout<<i<< '\t';
   }

   return 0;
}
