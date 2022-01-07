/******************************************************
Nama file: konstruktor_pewarisan.cpp
*******************************************************/

#include <iostream>

// mendefinisikan kelas dasar
class Induk {
private:
   int a;
public:
   // konstruktor kelas Induk dengan satu parameter
   Induk(int aa) {
      a = aa;  // inisialisasi atribut a
   }
   
   void setA(int aa) {
      a = aa;
   }
   
   int getA() {
      return a;
   }
};

// mendefinisikan kelas turunan dari Induk
class Anak: public Induk {
private:
   int b;
public:
   // konstruktor kelas Anak dengan dua parameter
   Anak(int aa, int bb) : Induk(aa) {
      b = bb;  // inisialisasi atribut b
   }   

   void setB(int bb) {
      b = bb;
   }
   
   int getB() {
      return b;
   }

};

int main() {
   // pointer ke kelas Anak
   Anak *obj;

   // membuat objek dari kelas Anak
   obj = new Anak(88, 99);                        
   
   // menampilkan nilai atribut
   std::cout<<"a: "<<obj->getA()<<std::endl;
   std::cout<<"b: "<<obj->getB()<<std::endl;
   
   delete obj;
   
   return 0;
}

