/******************************************************
Nama file: malloc.cpp
*******************************************************/

#include <iostream>
#include <cstdlib>	// malloc() dan free()

int main() {
   int *p {nullptr};
   
   p = (int *) malloc(5 * sizeof(int));
   
   for (auto i {0}; i<5; i++) {
      p[i] = (i+1) * 10;
      std::cout<<p[i]<<" ";
   }

   free(p);
   
   return 0;
}
