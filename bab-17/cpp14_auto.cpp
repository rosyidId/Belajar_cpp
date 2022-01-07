/******************************************************
Nama file: cpp14_auto.cpp
*******************************************************/

#include <iostream>

int main() {
   // auto pada konstanta
   const int x = 0;
   auto y = x;

   // auto pada referensi
   int a = 0;
   int& a1 = a;
   auto a2 = a1;
     
   // menampilkan nilai variabel y
   std::cout<<"Nilai awal"<<std::endl;
   std::cout<<"y: "<<y<<std::endl;
   std::cout<<"a2: "<<a2<<std::endl;
   
   y = 10;	// benar, y bertipe int
   std::cout<<"\nSetelah y diubah"<<std::endl;
   std::cout<<"y: "<<y<<std::endl;     
   
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
