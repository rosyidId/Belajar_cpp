/******************************************************
Nama file: new.cpp
*******************************************************/

#include <iostream>
#include <cstdlib>	// malloc() dan free()

int main() {
   int *p {nullptr};
   
   p = new int[5];
   
   for (auto i {0}; i<5; i++) {
      p[i] = (i+1) * 10;
      std::cout<<p[i]<<" " <<std::endl;
   }

   delete [] p;
   
   return 0;
}
