/******************************************************
Nama file: cpp17_inisialisasi_enum.cpp
*******************************************************/

#include <iostream>

enum byte : unsigned char {};

int main() {
   for (auto i{65}; i<91; i++) {
      byte b{(byte) i};
      std::cout<<(char) b<<" ";
   }

   return 0;
}
