/******************************************************
Nama file: stl_array.cpp
*******************************************************/

#include <iostream>
#include <array>	// std::array

int main() {   
   std::array<int, 5> a;
   
   // mengisi elemen-elemen array
   for (auto i {0}; i<5; i++) {
      a[i] = (i+1) * 10;
   }
   
   // menelusuri isi kontainer dan menampilkan elemen-elemennya
   std::array<int,5>::iterator it = a.begin();
   while (it != a.end()) {
      std::cout<<*it<<" ";
      it++;
   }   
   
   return 0;
}
