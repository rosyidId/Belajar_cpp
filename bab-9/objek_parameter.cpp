/******************************************************
Nama file: objek_parameter.cpp
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
   
   friend void perbesarBalok(Balok& obj);
   friend void perkecilBalok(Balok& obj);   
};

// fungsi untuk memperbesar objek dari kelas Balok
void perbesarBalok(Balok& obj) {
   obj.panjang++;
   obj.lebar++;
   obj.tinggi++;
}

// fungsi untuk memperkecil objek dari kelas Balok
void perkecilBalok(Balok& obj) {
   obj.panjang--;
   obj.lebar--;
   obj.tinggi--;
}

int main() {
   Balok obj(6,4,2);
   
   std::cout<<"Keadaan awal"<<std::endl;
   obj.cetakAtribut();
   obj.cetakVolume();
   
   // memperbesar objek
   perbesarBalok(obj);
   
   std::cout<<"\nSetelah diperbesar"<<std::endl;
   obj.cetakAtribut();
   obj.cetakVolume();
   
   // memperkecil objek
   perkecilBalok(obj);
   
   std::cout<<"\nSetelah diperkecil"<<std::endl;
   obj.cetakAtribut();
   obj.cetakVolume();
   
   return 0;
}

