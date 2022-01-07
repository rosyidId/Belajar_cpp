/******************************************************
Nama file: stl_array1.cpp
*******************************************************/

#include <iostream>
#include <array>	// std::array

int main() {   
   std::array<int, 5> a;
   
   // mengisi elemen-elemen array
   for (auto i {0}; i<5; i++) {
      a[i] = (i+1) * 10;
   }
   
   // menelusuri isi kontainer secara terbalik
   std::array<int,5>::reverse_iterator it = a.rbegin();
   while (it != a.rend()) {
      std::cout<<*it<<" ";
      it++;
   }
   
   return 0;
}
