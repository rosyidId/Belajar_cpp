/******************************************************
Nama file: main.cpp
*******************************************************/

#include <iostream>

// menyertakan file extern.cpp
#include "extern.cpp"

extern int a;  // mendeklarasikan variabel eksternal

int main() {   
   std::cout<<"Sebelum nilai a dinaikkan"<<std::endl;
   std::cout<<"Nilai a: "<<a<<std::endl;
   
   // memanggil fungsi incrementA()
   incrementA();
   
   std::cout<<std::endl;
   std::cout<<"Setelah nilai a dinaikkan"<<std::endl;
   std::cout<<"Nilai a: "<<a<<std::endl;
   
   return 0;
}
