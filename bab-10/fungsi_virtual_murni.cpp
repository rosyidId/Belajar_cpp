/******************************************************
Nama file: fungsi_virtual_murni.cpp
*******************************************************/

#include <iostream>

class Induk {
public:
   virtual ~Induk() { }
   
   // fungsi virtual murni
   virtual void cetak() = 0;
};

class Anak1: public Induk {
private:
   int a1;
public:
   Anak1() = default;
   Anak1(int a1) {
      this->a1 = a1;
   }
   
   // override fungsi Induk::cetak()
   void cetak() override {
      std::cout<<"Anak1::cetak() dipanggil: "<<a1<<std::endl;
   }
};

class Anak2: public Induk {
private:
   int a2;
public:
   Anak2() = default;
   Anak2(int a2) {
      this->a2 = a2;
   }
   
   // override fungsi Induk::cetak()
   void cetak() override {
      std::cout<<"Anak2::cetak() dipanggil: "<<a2<<std::endl;
   }
};

int main() {
   // pointer ke kelas Anak1
   Anak1 *obj1;
   // pointer ke kelas Anak2;
   Anak2 *obj2;

   // membuat objek dari kelas Anak1
   obj1 = new Anak1(88);
   
   // membuat objek dari kelas Anak2
   obj2 = new Anak2(99);
   
   // memanggil fungsi cetak() dari obj1 dan obj2
   obj1->cetak();
   obj2->cetak();
   
   delete obj1;
   delete obj2;
   
   return 0;
}
