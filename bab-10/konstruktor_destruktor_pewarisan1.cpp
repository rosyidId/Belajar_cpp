/******************************************************
Nama file: konstruktor_destruktor_pewarisan1.cpp
*******************************************************/

#include <iostream>

// mendefinisikan kelas dasar
class Induk {
public:
   // konstruktor kelas Induk
   Induk() {
      std::cout<<"Konstruktor Induk dipanggil..."<<std::endl;
   }
   
   // destruktor kelas Induk
   ~Induk() {
      std::cout<<"Destruktor Induk dipanggil..."<<std::endl;
   }
};

// mendefinisikan kelas turunan dari Induk
class Anak: public Induk {
public:
   // konstruktor kelas Anak
   Anak() {
      std::cout<<"Konstruktor Anak dipanggil..."<<std::endl;
   }
   
   // destruktor kelas Anak
   ~Anak() {
      std::cout<<"Destruktor Anak dipanggil..."<<std::endl;
   }
};

// mendefinisikan kelas turunan dari Anak
class Cucu: public Anak {
public:
   // konstruktor kelas Cucu
   Cucu() {
      std::cout<<"Konstruktor Cucu dipanggil..."<<std::endl;
   }
   
   // destruktor kelas Cucu
   ~Cucu() {
      std::cout<<"Destruktor Cucu dipanggil..."<<std::endl;
   }
};

int main() {
   // pointer ke kelas Cucu
   Cucu *obj;

   // membuat objek dari kelas Cucu
   std::cout<<"Membuat objek dari kelas Cucu"<<std::endl;
   obj = new Cucu();	// akan memanggil Induk::Induk(),
                        // Anak::Anak(), dan Cucu::Cucu

   
   // menghapus objek dari kelas Cucu
   std::cout<<"\nMenghapus objek dari kelas Cucu"<<std::endl;
   delete obj;	// akan memanggil Cucu::~Cucu,
                // Anak::~Anak(), dan Induk::~Induk()
   
   return 0;
}

