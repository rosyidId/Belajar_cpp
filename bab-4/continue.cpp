/******************************************************
Nama file: continue.cpp
*******************************************************/

#include <iostream>

int main() {   
   for (auto i {0}; i<10; i++) {      
      if (i == 1 || i == 4 || i == 7) continue;
      
      // aksi ini tidak akan dieksekusi
      // ketika i bernilai 1, 4, atau 7
      std::cout<<i<<" ";
   }
   
   return 0; 
}
