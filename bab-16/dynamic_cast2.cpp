/******************************************************
Nama file: dynamic_cast2.cpp
*******************************************************/

#include <iostream>

class Induk {
public:
  virtual void tulis() { 
    std::cout<<"Ini di dalam kelas Induk"<<std::endl;
  }
};

class Anak: public Induk {
public:
  void tulis() { 
     std::cout<<"Ini di dalam kelas Anak"<<std::endl; 
  }
};

int main() {
   // Mendeklarasikan pointer 
   // dan melakukan instansiasi 
   // untuk tipe Induk
   Induk *pi, ob_I;

   // mendeklarasikan pointer 
   // dan melakukan instansiasi 
   // untuk tipe Anak
   Anak *pa, ob_A;

   // melakukan typecasting 
   // dari tipe Induk ke tipe Induk
   pi = dynamic_cast<Induk *> (&ob_I);

   if (pi) {
      std::cout<<"Typecasting dari tipe Induk " \
                 "ke tipe Induk sukses"<<std::endl;
      pi->tulis();
   }
   std::cout<<std::endl;

   // melakukan typecasting 
   // dari tipe Induk ke tipe Anak.
   // Baris ini akan menyebabkan peringatan (warning)
   pa = dynamic_cast<Anak *> (&ob_I);

   if (!pa) {
      std::cout<<"Typecasting dari tipe Induk "
               <<"ke tipe Anak gagal"<<std::endl;
   }
   std::cout<<std::endl;

   // melakukan typecasting 
   // dari tipe Induk ke tipe Anak
   pi = &ob_A;
   pa = dynamic_cast<Anak *> (pi);
   if (pa) {
      std::cout<<"Typecasting dari tipe Induk "
               <<"ke tipe Anak sukses"<<std::endl;
      pa->tulis();
   }
   std::cout<<std::endl;

   // melakukan typecasting 
   // dari tipe Anak ke tipe Anak
   pa = dynamic_cast<Anak *> (&ob_A);
   if (pa) {
      std::cout<<"Typecasting dari tipe Anak "
               <<"ke tipe Anak sukses"<<std::endl;
      pa->tulis();
   }
   std::cout<<std::endl;

   // melakukan typecasting 
   // dari tipe Anak ke tipe Induk
   pa = &ob_A;
   pi = dynamic_cast<Induk *> (pa);
   if (pi) {
      std::cout<<"Typecasting dari tipe Anak "
               <<"ke tipe Induk sukses"<<std::endl;
      pi->tulis();
   }

   return 0;
}
