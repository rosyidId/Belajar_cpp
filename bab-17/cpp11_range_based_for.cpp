/******************************************************
Nama file: cpp11_range_based_for.cpp
*******************************************************/

#include <iostream>

int main() {   
   int a[5] = {100, 200, 300, 400, 500};

   for (auto i: a) {
      std::cout<<i;
      std::cout<<std::endl;
   }

   return 0;
}
