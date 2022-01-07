/******************************************************
Nama file: pointer_decrement.cpp
*******************************************************/

#include <iostream>

int main() {
   int a[5] {10, 20, 30, 40, 50};
   int *akhir = a - 1;
   
   for (int *p {&a[4]}; p != akhir; p--) {
      std::cout<<*p<<" ";
   }
   
   return 0;
}
