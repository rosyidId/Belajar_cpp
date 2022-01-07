/******************************************************
Nama file: pass_by_reference.cpp
*******************************************************/

#include <iostream>

// melewatkan parameter berdasarkan referensi
void tukar(int& a, int& b) {
   int c = a;
   a = b;
   b = c;
}

int main() {
   int x {10}, y {20};
   
   // menampilkan nilai sebelum ditukar
   std::cout<<"Sebelum ditukar"<<std::endl;
   std::cout<<"x: "<<x<<std::endl;
   std::cout<<"y: "<<y<<std::endl;
   
   // memanggil fungsi tukar()
   tukar(x, y);
   
   // menampilkan nilai sebelum ditukar
   std::cout<<"\nSetelah ditukar"<<std::endl;
   std::cout<<"x: "<<x<<std::endl;
   std::cout<<"y: "<<y<<std::endl;
   
   return 0;
}
