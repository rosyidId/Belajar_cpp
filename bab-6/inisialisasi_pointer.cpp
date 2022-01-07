/******************************************************
Nama file: inisialisasi_pointer.cpp
*******************************************************/

#include <iostream>

int main() {
   int *p {nullptr};
   
   if (p != nullptr) {
      std::cout<<"pointer sedang menunjuk ke alamat tertentu";
   } else {
      std::cout<<"pointer bernilai NULL";
   }

   return 0;
}
