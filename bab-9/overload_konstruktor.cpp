/******************************************************
Nama file: overload_konstruktor.cpp
*******************************************************/

#include <iostream>
#include <iomanip>	// std::fixed

// mendefinisikan kelas
class PrismaSegiempat {
private:
   double panjang;
   double lebar;
   double tinggi;
   
   double volume() {
      return panjang * lebar * tinggi;
   }

public:
   // konstruktor untuk balok (memiliki tiga parameter)
   PrismaSegiempat(double p, double l, double t) {
      panjang = p;
      lebar = l;
      tinggi = t;
   }
   
   // konstruktor untuk kubus (memiliki satu parameter)
   PrismaSegiempat(double sisi) {
      panjang = lebar = tinggi = sisi;
   }
   
   void setPanjang(double nilai) {
      panjang = nilai;
   }
   
   double getPanjang() {
      return panjang;
   }
   
   void setLebar(double nilai) {
      lebar = nilai;
   }
   
   double getLebar() {
      return lebar;
   }
   
   void setTinggi(double nilai) {
      tinggi = nilai;
   }
   
   double getTinggi() {
      return tinggi;
   }
   
   void cetakVolume(std::string namaBangun) {
      std::cout<<std::fixed;
      std::cout<<"Volume "<<namaBangun<<" = "
               <<volume()
               <<std::endl;
   }
};

int main() {
   PrismaSegiempat *obj1, *obj2;
   
   // membuat balok
   obj1 = new PrismaSegiempat(10.0, 9.0, 8.0);   
   obj1->cetakVolume("balok");
   
   // membuat kubus
   obj2 = new PrismaSegiempat(5.0);   
   obj2->cetakVolume("kubus");
   
   delete obj1;
   delete obj2;
   
   return 0;
}

