/******************************************************
Nama file: konstruktor_pewarisan1.cpp
*******************************************************/

#include <iostream>
#include <iomanip>	// std::fixed
#include <string>	// std::string

class Balok {
private:
   double panjang;
   double lebar;
   double tinggi;
   
   double volume() {
      return panjang * lebar * tinggi;
   }

public:
   Balok() = default;	// konstruktor standar kelas Balok
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
   
   void cetakVolume() {
      std::cout<<std::fixed;
      std::cout<<"Volume balok \t= "
               <<volume()
               <<std::endl;
   }   
};

class BalokWarna: public Balok {
private:
   std::string warna;
public:
   BalokWarna() = default;	// konstruktor standar kelas BalokWarna
   BalokWarna(double panjang, 
              double lebar,
              double tinggi, 
              std::string warna) :
              Balok(panjang, lebar, tinggi) {
      this->warna = warna;
   }
   
   void setWarna(std::string warna) {
      this->warna = warna;
   }
   
   std::string getWarna() {
      return warna;
   }   
};

int main() {
   // pointer ke kelas BalokWarna
   BalokWarna *obj1, *obj2;

   // membuat objek dari kelas BalokWarna
   // menggunakan konstruktor standar
   obj1 = new BalokWarna();
   
   // mengisi nilai-nilai atribut objek pertama
   obj1->setPanjang(6);
   obj1->setLebar(4);
   obj1->setTinggi(2);
   obj1->setWarna("merah");
   
   // menampilkan nilai-nilai atribut dan volume objek pertama
   std::cout<<"Objek pertama"<<std::endl;
   std::cout<<"panjang\t\t: "<<obj1->getPanjang()<<std::endl;
   std::cout<<"lebar\t\t: "<<obj1->getLebar()<<std::endl;
   std::cout<<"tinggi\t\t: "<<obj1->getTinggi()<<std::endl;
   std::cout<<"warna\t\t: "<<obj1->getWarna()<<std::endl;
   obj1->cetakVolume();
   
   // membuat objek dari kelas BalokWarna
   // menggunakan konstruktor berparameter
   obj2 = new BalokWarna(10,9,8,"putih");
   
   // menampilkan nilai-nilai atribut dan volume objek kedua
   std::cout<<"\nObjek kedua"<<std::endl;
   std::cout<<"panjang\t\t: "<<obj2->getPanjang()<<std::endl;
   std::cout<<"lebar\t\t: "<<obj2->getLebar()<<std::endl;
   std::cout<<"tinggi\t\t: "<<obj2->getTinggi()<<std::endl;
   std::cout<<"warna\t\t: "<<obj2->getWarna()<<std::endl;
   obj2->cetakVolume();
   
   delete obj1;
   delete obj2;
   
   return 0;
}

