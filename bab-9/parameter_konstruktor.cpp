/******************************************************
Nama file: parameter_konstruktor.cpp
*******************************************************/

#include <iostream>
#include <iomanip>	// std::fixed

// mendefinisikan kelas
class Balok {
private:
   double panjang;
   double lebar;
   double tinggi;
   
   double volume() {
      return panjang * lebar * tinggi;
   }

public:
   Balok(double p, double l, double t) {
      panjang = p;
      lebar = l;
      tinggi = t;
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
   
   void cetakVolume() {
      std::cout<<std::fixed;
      std::cout<<"Volume balok = "
               <<volume()
               <<std::endl;
   }
};

int main() {
   Balok *obj;
   
   // membuat objek dari kelas Balok
   obj = new Balok(6,4,2);
   
   std::cout<<"Nilai awal"<<std::endl;
   obj->cetakVolume();
   
   // mengubah nilai atribut-atribut objek
   obj->setPanjang(10);
   obj->setLebar(8);
   obj->setTinggi(6);
   
   std::cout<<"\nNilai setelah diubah"<<std::endl;
   obj->cetakVolume();
   
   delete obj;
   
   return 0;
}

