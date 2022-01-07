/******************************************************
Nama file: static_cast.cpp
*******************************************************/

#include <iostream>

int main() {
   // mendeklarasikan variabel 
   // yang bertipe int
   int x;

   // mengisikan dan menampilkan 
   // nilai x sebagai tipe int
   for (auto i {0}; i<5; i++) {
      x = i+65;
      std::cout<<x<<std::endl;
   }
   std::cout<<std::endl;

   // mengisi nilai x dengan tipe int
   // dan menampilkannya sebagai tipe char
   for (auto i {0}; i<5; i++) {
      x = i+65;
      // melakukan typecasting
      std::cout<<static_cast<char> (x)<<std::endl;
   }

   return 0;
}
