/******************************************************
Nama file: dynamic_cast.cpp
*******************************************************/

#include <iostream>

class Induk {
public:
  virtual void tulis() { }
};

class Anak: public Induk {
public:
  void tulis() { 
     std::cout<<"Ini di dalam kelas Anak"<<std::endl; 
  }
};

int main() {
   // mendeklarasikan pointer 
   // dan melakukan instansiasi 
   // untuk tipe Induk
   Induk *pi, ob_I;

   // mendeklarasikan pointer 
   // dan melakukan instansiasi 
   // untuk tipe Anak
   Anak *pa, ob_A;

   // memerintahkan pointer pi 
   // untuk menunjuk ke alamat objek ob_A
   pi = &ob_A;

   // melakukan typecasting 
   // terhadap pointer pi sebagai pointer 
   // yang akan menunjuk ke tipe Anak
   pa = dynamic_cast <Anak *> (pi);

   if (pa) {
      std::cout<<"Typecasting sukses"<<std::endl;
      pa->tulis();
   }

   return 0;
}
