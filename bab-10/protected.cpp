/******************************************************
Nama file: pewarisan_bertingkat.cpp
*******************************************************/

#include <iostream>

class PrismaSegiempat {
// atribut dan fungsi dengan tingkat akses protected
protected:
   double panjang;
   double lebar;
   double tinggi;
   
   double volume() {
      return panjang * lebar * tinggi;
   }

public:
   virtual ~PrismaSegiempat() { }
   
   void setPanjang(double panjang) {
      this->panjang = panjang;
   }
   
   double getPanjang() {
      return panjang;
   }
   
   void setLebar(double lebar) {
      this->lebar = lebar;
   }
   
   double getLebar() {
      return lebar;
   }
   
   void setTinggi(double tinggi) {
      this->tinggi = tinggi;
   }
   
   double getTinggi() {
      return tinggi;
   }
   
   virtual void cetakVolume() = 0;  // fungsi virtual murni
};

class Balok: public PrismaSegiempat {
public:
   Balok() = default;
   Balok(double panjang, double lebar, double tinggi) {
      // mengakses atribut protected milik kelas Induk
      this->panjang = panjang;
      this->lebar = lebar;
      this->tinggi = tinggi;
   }
   
   // override fungsi PrismaSegiempat::cetakVolume()
   void cetakVolume() override {
      std::cout<<std::fixed;
      std::cout<<"Volume balok \t= "
               <<volume()	// mengakses fungsi protected
               <<std::endl;   
   }
};

class Kubus: public PrismaSegiempat {
public:
   Kubus() = default;
   Kubus(double sisi) {
      // mengakses atribut protected milik kelas Induk
      panjang = lebar = tinggi = sisi;
   }
   
   // override fungsi PrismaSegiempat::cetakVolume()
   void cetakVolume() override {
      std::cout<<std::fixed;
      std::cout<<"Volume kubus \t= "
               <<volume()	// mengakses fungsi protected
               <<std::endl;   
   }
};

int main() {
   // pointer ke kelas Balok
   Balok *obj1;
   // pointer ke kelas Kubus;
   Kubus *obj2;

   // membuat objek dari kelas Balok
   obj1 = new Balok(6,4,2);
   // membuat objek dari kelas Kubus
   obj2 = new Kubus(5);
   
   // menampilkan volume dari obj1 dan obj2
   obj1->cetakVolume();
   obj2->cetakVolume();
   
   delete obj1;
   delete obj2;
   
   return 0;
}
