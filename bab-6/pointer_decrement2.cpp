/******************************************************
Nama file: pointer_decrement2.cpp
*******************************************************/

#include <iostream>
#include <array>	// std::array

int main() {
   std::array<int, 5> a {10, 20, 30, 40, 50};
   
   for (auto p {a.rbegin()}; p < a.rend(); ++p) {
      std::cout<<*p<<" ";
   }
   
   return 0;
}
