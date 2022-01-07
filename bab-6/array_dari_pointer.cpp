/******************************************************
Nama file: array_dari_pointer.cpp
*******************************************************/

#include <iostream>

int main() {
   int *p[5];
   
   std::cout<<"Sebelum diubah"<<std::endl;
   for (auto i {0}; i<5; i++) {
      // alokasi memori untuk tipe int
      p[i] = new int;
      // mengisi nilai ke dalam alamat yang dialokasikan
      *p[i] = (i+1) * 10;
      // menampilkan nilai
      std::cout<<"Nilai "<<*p[i]
               <<" tersimpan pada alamat "<<p[i]
               <<std::endl;
   }
   
   // mengubah nilai yang ditunjuk oleh p[2]
   *p[2] = 99;
   
   // menampilkan kembali nilai-nilai
   // yang ditunjuk oleh elemen-elemen array p
   
   std::cout<<"\nSetelah diubah"<<std::endl;
   for (auto i {0}; i<5; i++) {
      std::cout<<"Nilai "<<*p[i]
               <<" tersimpan pada alamat "<<p[i]
               <<std::endl;
               
   }
   
   // menghapus semua alamat yang telah dialokasikan
   for (auto i {0}; i<5; i++) {
      delete p[i];
   }
   
   return 0;
}
