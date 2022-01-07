/******************************************************
Nama file: stl_array3.cpp
*******************************************************/

#include <iostream>
#include <array>	// std::array

int main() {   
   std::array<int, 5> a = {10};
   
   std::array<int,5>::iterator it = a.begin();
   while (it != a.end()) {
      std::cout<<*it<<" ";
      it++;
   }
   
   return 0;
}
