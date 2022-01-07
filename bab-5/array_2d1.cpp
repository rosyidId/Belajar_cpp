/******************************************************
Nama file: array_2d1.cpp
*******************************************************/

#include <iostream>

int main() {
   int tabel[4][3] {
          {1,5,3},
          {2,4,1},
          {3,2,4},
          {4,3,2}
	   };

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
