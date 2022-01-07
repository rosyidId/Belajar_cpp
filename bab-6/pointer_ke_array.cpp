/******************************************************
Nama file: pointer_ke_array.cpp
*******************************************************/

#include <iostream>

int main() {
   int a[5] {10, 20, 30, 40, 50};
   int *p;
   
   p = a[1];
   
   // mengakses elemen array melalui pointer
   for (auto i {0}; i<5; i++) {
      std::cout<<p[i]<<" ";
   }
   
   return 0;
}
