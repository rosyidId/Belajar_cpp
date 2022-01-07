/******************************************************
Nama file: array.cpp
*******************************************************/

#include <iostream>

int main() {
   int a[5];
   int jumlah {0};
  
   // mengisi elemen array
   std::cout<<"Memasukkan nilai ke dalam array"<<std::endl;
   for (auto i {0}; i<5; i++) {
      std::cout<<"a["<<i+1<<"] : ";
      std::cin>>a[i];
      jumlah += a[i];
   }
   
   // menampilkan elemen array
   std::cout<<"\nData yang dimasukkan\t: ";
   for (auto e: a) {
     std::cout<<e<<" ";
   }
   std::cout<<"\nJumlah total\t\t: "<<jumlah;

   return 0;
}
