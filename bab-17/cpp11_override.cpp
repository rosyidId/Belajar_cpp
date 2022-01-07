/******************************************************
Nama file: cpp11_override.cpp
*******************************************************/

#include <iostream>

class DuaDimensi {
public:
   // mendefinisikan fungsi virtual
   virtual double hitungLuas() = 0;
   virtual void tulisLuas() = 0;
   
   // destruktor virtual
   virtual ~DuaDimensi() {}
};

class PersegiPanjang: public DuaDimensi {
   double panjang;
   double lebar;
public:
   PersegiPanjang(double panjang, double lebar) {
      this->panjang = panjang;
      this->lebar = lebar;
   }   
  
   double hitungLuas() override {
      return panjang * lebar;
   }
  
   void tulisLuas() override {
      std::cout<< "Luas persegi panjang: "
               <<hitungLuas()
               <<std::endl;
   }
};

class Lingkaran: public DuaDimensi {
   double radius;
public:
   Lingkaran(double radius) {
      this->radius = radius;
   }
  
   double hitungLuas() override {
      return 3.1416 * radius * radius;
   }
  
   void tulisLuas() override {
      std::cout<< "Luas lingkaran: "
               <<hitungLuas()
               <<std::endl;
   }
};

int main() {
   DuaDimensi *obj;

   obj = new PersegiPanjang(6, 4);
   obj->tulisLuas();

   delete obj;

   obj = new Lingkaran(3);
   obj->tulisLuas();

   delete obj;

   return 0;
}
