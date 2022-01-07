/******************************************************
Nama file: variabel7.cpp
*******************************************************/

#include <iostream>

// variabel global
int x;

void inisialisasi() {
   // mengakses variabel x dari fungsi inisialisasi()
   x = 0;  // mengisi nilai awal
}

void ubah(int nilai) {
   // mengakses variabel x dari fungsi ubah()
   x = nilai;
}

void cetak() {
   std::cout<<"Nilai x: "<<x<<std::endl;
}

int main() {
   // memanggil fungsi inisialisasi()
   inisialisasi();
   
   // menampilkan nilai x sebelum diubah
   std::cout<<"Sebelum diubah"<<std::endl;
   cetak();
   
   // mengubah nilai x
   ubah(9);
   
   // menampilkan nilai x setelah diubah
   std::cout<<std::endl;
   std::cout<<"Setelah diubah"<<std::endl;
   cetak();
   
   return 0;
}
