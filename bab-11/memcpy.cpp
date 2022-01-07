/******************************************************
Nama file: memcpy.cpp
*******************************************************/

#include <iostream>
#include <cstring>	// memcpy()

struct Siswa {
  char nama[25];
  int usia;
};

int main() {
   Siswa siswa, salinan_siswa;
  
   // menggunakan memcpy() untuk menyalin string
   memcpy(siswa.nama, "Bayu Nugroho", 13);
   siswa.usia = 19;

   // menggunakan memcpy() untuk menyalin struktur
   memcpy(&salinan_siswa, &siswa, sizeof(siswa));

   // menampilkan data salinan_siswa
   std::cout<<"Salinan data siswa"<<std::endl;
   std::cout<<"Nama: "<<salinan_siswa.nama<<std::endl;
   std::cout<<"Usia: "<<salinan_siswa.usia;
      
   return 0;
}
