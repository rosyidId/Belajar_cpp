/******************************************************
Nama file: continue1.cpp
*******************************************************/

#include <iostream>

int main() {   
   for (auto i {0}; i<10; i++) {      
      std::cout<<i<<" ";

      // ketika i genap, eksekusi program
      // akan kembali lagi ke atas
      if (i % 2 == 0) {
        continue; // kembali ke atas (lanjut ke nilai i berikutnya)
      }

      // aksi di bawah ini
      // akan diabaikan ketika i genap
      std::cout<<std::endl;
   }
   
   return 0; 
}
