/******************************************************
Nama file: objek_hasil_fungsi.cpp
*******************************************************/

#include <iostream>
#include <iomanip>	// std::fixed

class Balok {
private:
   double panjang;
   double lebar;
   double tinggi;
   
   double volume() {
      return panjang * lebar * tinggi;
   }

public:
   // konstruktor standar
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
   
   void cetakAtribut() {
      std::cout<<std::fixed;
      std::cout<<"panjang\t\t: "<<panjang<<std::endl;
      std::cout<<"lebar\t\t: "<<lebar<<std::endl;
      std::cout<<"tinggi\t\t: "<<tinggi<<std::endl;
   }
   
   void cetakVolume() {
      std::cout<<std::fixed;
      std::cout<<"Volume balok \t= "
               <<volume()
               <<std::endl;
   }
   
   // fungsi yang mengembalikan objek dari kelas Balok
   Balok perbesarBalok() {
      Balok obj;
      obj.panjang = panjang + 1;
      obj.lebar = lebar + 1;
      obj.tinggi = tinggi + 1;
      return obj;  // mengembalikan objek yang sudah diperbesar
   }
   
   // fungsi yang mengembalikan objek dari kelas Balok
   Balok perkecilBalok() {
      Balok obj;
      obj.panjang = panjang - 1;
      obj.lebar = lebar - 1;
      obj.tinggi = tinggi - 1;
      return obj;  // mengembalikan objek yang sudah diperkecil
   }   
};

int main() {
   Balok obj1(6,4,2);
   Balok obj2, obj3;
   
   std::cout<<"Objek obj1"<<std::endl;
   obj1.cetakAtribut();
   obj1.cetakVolume();
   
   // membuat objek baru yang ukurannya lebih besar dari obj1
   obj2 = obj1.perbesarBalok();
   
   std::cout<<"\nObjek obj2"<<std::endl;
   obj2.cetakAtribut();
   obj2.cetakVolume();
   
   // membuat objek baru yang ukurannya lebih kecil dari obj1
   obj3 = obj1.perkecilBalok();
   
   std::cout<<"\nObjek obj3"<<std::endl;
   obj3.cetakAtribut();
   obj3.cetakVolume();
   
   return 0;
}

