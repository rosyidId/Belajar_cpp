/******************************************************
Nama file: konstruktor_destruktor_pewarisan.cpp
*******************************************************/

#include <iostream>

// mendefinisikan kelas dasar
class Induk {
public:
   // konstruktor kelas dasar
   Induk() {
      std::cout<<"Konstruktor Induk dipanggil..."<<std::endl;
   }
   
   // destruktor kelas dasar
   ~Induk() {
      std::cout<<"Destruktor Induk dipanggil..."<<std::endl;
   }
};

// mendefinisikan kelas turunan
class Anak: public Induk {
public:
   // konstruktor kelas turunan
   Anak() {
      std::cout<<"Konstruktor Anak dipanggil..."<<std::endl;
   }
   
   // destruktor kelas turunan
   ~Anak() {
      std::cout<<"Destruktor Anak dipanggil..."<<std::endl;
   }
};

int main() {
   // pointer ke kelas Anak
   Anak *obj;

   // membuat objek dari kelas turunan
   std::cout<<"Membuat objek dari kelas Anak"<<std::endl;
   obj = new Anak();	// akan memanggil Induk::Induk() dan
                        // Anak::Anak()

   
   // menghapus objek dari kelas turunan
   std::cout<<"\nMenghapus objek dari kelas Anak"<<std::endl;
   delete obj;	// akan memanggil Anak::~Anak() dan
                // Induk::~Induk()
   
   return 0;
}

