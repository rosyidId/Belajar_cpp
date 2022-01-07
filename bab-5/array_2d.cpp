/******************************************************
Nama file: array_2d.cpp
*******************************************************/

#include <iostream>

int main() {
   // array berukuran 4x3
   int tabel[4][3];

   // mengisi nilai ke dalam elemen array.
   // baris pertama
   tabel[0][0] = 1;
   tabel[0][1] = 5;
   tabel[0][2] = 3;
   // baris kedua
   tabel[1][0] = 2;
   tabel[1][1] = 4;
   tabel[1][2] = 1;
   // baris ketiga
   tabel[2][0] = 3;
   tabel[2][1] = 2;
   tabel[2][2] = 4;
   // baris keempat
   tabel[3][0] = 4;
   tabel[3][1] = 3;
   tabel[3][2] = 2;

   // menampilkan isi array
   std::cout<<"Isi array:"<<std::endl;
   for (auto i {0}; i<4; i++) {
      // mencetak per baris
      for (auto j {0}; j<3; j++) {
         std::cout<<tabel[i][j]<<" ";
      }
      // membuat baris baru
      std::cout<<std::endl;
   }


   return 0;
}
