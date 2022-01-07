/******************************************************
Nama file: cpp14_decltype_auto.cpp
*******************************************************/

#include <iostream>
#include <typeinfo>

int main() {
   // decltype(auto) pada konstanta
   const int x = 0;
   decltype(auto) y = x;

   // decltype(auto) pada referensi
   int a = 0;
   int& a1 = a;
   decltype(auto) a2 = a1;
     
   // menampilkan nilai variabel y
   std::cout<<"Nilai awal"<<std::endl;
   std::cout<<"y: "<<y<<std::endl;
   std::cout<<"a2: "<<a2<<std::endl;
   
   // y = 10;	// salah, y bertipe const int     
   
   // mengubah nilai a
   a = 10;
   
   std::cout<<"\nSetelah a diubah"<<std::endl;
   std::cout<<"a2: "<<a2<<std::endl;

   // mengubah nilai a1
   a1 = 20;
   
   std::cout<<"\nSetelah a1 diubah"<<std::endl;
   std::cout<<"a2: "<<a2<<std::endl;

   return 0;
}
