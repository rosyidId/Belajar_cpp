/******************************************************
Nama file: pointer_increment.cpp
*******************************************************/

#include <iostream>

int main() {
   int a[5] {10, 20, 30, 40, 50};
   int *akhir = a + 5;
   
   for (int *p {a}; p != akhir; p++) {
      std::cout<<*p<<" ";
   }
   
   return 0;
}
