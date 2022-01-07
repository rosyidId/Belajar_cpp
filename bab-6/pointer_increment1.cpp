/******************************************************
Nama file: pointer_increment1.cpp
*******************************************************/

#include <iostream>
#include <iterator>

int main() {
   int a[5] {10, 20, 30, 40, 50};
   
   for (int *p {std::begin(a)}; p != std::end(a); p++) {
      std::cout<<*p<<" ";
   }
   
   return 0;
}
