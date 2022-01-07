/******************************************************
Nama file: variabel4.cpp
*******************************************************/

#include <iostream>

int main() {
   // inisialisasi variabel
   int a {10}, b {20};

   // menampilkan nilai awal
   std::cout<<"Sebelum diubah"<<std::endl;
   std::cout<<"a = "<<a<<std::endl;
   std::cout<<"b = "<<b<<std::endl<<std::endl;

   // mengubah nilai variabel
   a = 100;
   b = 200;
   
   std::cout<<"Setelah diubah"<<std::endl;
   std::cout<<"a = "<<a<<std::endl;
   std::cout<<"b = "<<b<<std::endl;
   
   return 0;
}
