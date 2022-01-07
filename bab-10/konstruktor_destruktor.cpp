/******************************************************
Nama file: konstruktor_destruktor.cpp
*******************************************************/

#include <iostream>

class Induk {
public:
   // konstruktor kelas dasar
   Induk() {
      std::cout<<"Induk::Induk()"<<std::endl;
   }
   
   // destruktor kelas dasar
   ~Induk() {
      std::cout<<"Induk::~Induk()"<<std::endl;
   }
};

class Anak: public Induk {
public:
   // konstruktor kelas turunan
   Anak() {
      std::cout<<"Anak::Anak()"<<std::endl;
   }
   
   // destruktor kelas turunan
   ~Anak() {
      std::cout<<"Anak::~Anak()"<<std::endl;
   }
};

int main() {
   // pointer ke kelas Anak
   Anak *obj;
   
   // membuat objek dari kelas Anak
   obj = new Anak();
   
   // menghapus objek
   delete obj;
   
   return 0;
}
