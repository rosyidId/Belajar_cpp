/******************************************************
Nama file: fungsi_virtual_murni1.cpp
*******************************************************/

#include <iostream>
#include <iomanip>	// std::fixed
#include <cmath>	// fungsi pow()

#define PI 3.14159	// makro untuk PI

class TigaDimensi {
public:
   virtual ~TigaDimensi() { }
   
   // fungsi virtual murni (fungsi abstrak)
   virtual double volume() = 0;
   
   // fungsi non-abstrak
   void cetakVolume() {
	   std::cout<<std::fixed;
	   std::cout<<"Volume = "
	            <<volume()	// memanggil fungsi volume()
	            <<std::endl;
   }
};

class Balok: public TigaDimensi {
private:
   double panjang;
   double lebar;
   double tinggi;
public:
   Balok() = default;
   Balok(double panjang, double lebar, double tinggi) {
      this->panjang = panjang;
      this->lebar = lebar;
      this->tinggi = tinggi;
   }
   
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
   
   // override TigaDimensi::volume()
   double volume() override {
      return panjang * lebar * tinggi;
   }
};

class Kubus: public TigaDimensi {
private:
   double sisi;
public:
   Kubus() = default;
   Kubus(double sisi) {
      this->sisi = sisi;
   }
   
   void setSisi(double sisi) {
      this->sisi = sisi;
   }
   
   double getSisi() {
      return sisi;
   }
   
   // override TigaDimensi::volume()
   double volume() override {
      return pow(sisi, 3);
   }
};

class Bola: public TigaDimensi {
private:
   double radius;
public:
   Bola() = default;
   Bola(double radius) {
      this->radius = radius;
   }
   
   void setRadius(double radius) {
      this->radius = radius;
   }
   
   double getRadius() {
      return radius;
   }
   
   // override TigaDimensi::volume()
   double volume() override {
      return (PI * pow(radius,3) * 4) / 3;
   }
};

int main() {
   // pointer ke kelas Balok
   Balok *obj1;
   // pointer ke kelas Kubus
   Kubus *obj2;
   // pointer ke kelas Bola
   Bola *obj3;
   
   // membuat objek dari kelas Balok
   obj1 = new Balok(6,4,2);
   
   // membuat objek dari kelas Kubus
   obj2 = new Kubus(5);
   
   // membuat objek dari kelas Bola
   obj3 = new Bola(4);
   
   // memanggil fungsi volume() dari obj1, obj2, dan obj3
   std::cout<<"Balok"<<std::endl;
   obj1->cetakVolume();
   std::cout<<"\nKubus"<<std::endl;
   obj2->cetakVolume();
   std::cout<<"\nBola"<<std::endl;
   obj3->cetakVolume();
   
   delete obj1;
   delete obj2;
   delete obj3;
   
   return 0;
}
