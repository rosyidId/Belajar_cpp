/******************************************************
Nama file: pointer_decrement1.cpp
*******************************************************/

#include <iostream>
#include <iterator>	// std::begin() dan std::end()

int main() {
   int a[5] {10, 20, 30, 40, 50};
   
   for (int *p {std::end(a)-1}; p != std::begin(a)-1; p--) {
      std::cout<<*p<<" ";
   }
   
   return 0;
}
