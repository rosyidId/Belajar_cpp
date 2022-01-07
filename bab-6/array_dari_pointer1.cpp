/******************************************************
Nama file: array_dari_pointer1.cpp
*******************************************************/

#include <iostream>

int main() {
   const char *daftar[5] {"C","C++","C#","Java","Python"};
   
   // menampilkan daftar string
   std::cout<<"Daftar bahasa pemrograman: "<<std::endl;
   for (auto i {0}; i<5; i++) {
      std::cout<<i+1<<". "<<daftar[i]<<std::endl;
   }
   
   return 0;
}
