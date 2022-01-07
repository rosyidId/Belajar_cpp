/******************************************************
Nama file: function_overridding1.cpp
*******************************************************/

#include <iostream>

class Induk {
public:
   Induk() = default;
   virtual ~Induk() { }
   
   // fungsi virtual 
   // (fungsi yang akan dimodifikasi oleh kelas turunan)
   virtual void cetak() {
      std::cout<<"Induk::cetak() dipanggil..."<<std::endl;
   }   
};

class Anak: public Induk {
public:
   // melakukan override terhadap fungsi Induk::cetak()
   void cetak() override {
      std::cout<<"Anak::cetak() dipanggil..."<<std::endl;
   }
};

int main() {
   // pointer ke kelas Anak
   Anak *obj;

   // membuat objek dari kelas Anak
   obj = new Anak();
   
   // memanggil fungsi Anak::cetak()
   obj->cetak();
   
   delete obj;
   
   return 0;
}
