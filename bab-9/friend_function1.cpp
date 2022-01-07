/******************************************************
Nama file: friend_function1.cpp
*******************************************************/

#include <iostream>
#include <iomanip>	// std::fixed

// deklarasi kelas Kubus
class Kubus;

class Balok {
private:
   double panjang;
   double lebar;
   double tinggi;
   
   double volume() {
      return panjang * lebar * tinggi;
   }

public:
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
   
   // deklarasi fungsi teman di dalam kelas Balok
   friend void cetakVolume(Balok b, Kubus k);
};

class Kubus {
private:
   double sisi;
   
   double volume() {
      return sisi * sisi * sisi;
   }

public:
   Kubus(double sisi) {
      this->sisi = sisi;
   }
   
   void setSisi(double sisi) {
      this->sisi = sisi;
   }
   
   double getSisi() {
      return sisi;
   }
   
   // deklarasi fungsi teman di dalam kelas Kubus
   friend void cetakVolume(Balok b, Kubus k);
};

// implementasi fungsi teman
void cetakVolume(Balok b, Kubus k) {
   std::cout<<std::fixed;
   std::cout<<"Volume balok = "<<b.volume()<<std::endl;
   std::cout<<"Volume kubus = "<<k.volume()<<std::endl;
}

int main() {   
   // membuat objek dari kelas Balok
   Balok obj1(6,4,2);
   
   // membuat objek dari kelas Kubus
   Kubus obj2(5);
   
   // memanggil fungsi cetakVolume()
   cetakVolume(obj1, obj2);
   
   return 0;
}
