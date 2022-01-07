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
};

int main() {
   Balok daftar[3];
   
   // menentukan nilai atribut untuk objek pertama
   daftar[0].setPanjang(6);
   daftar[0].setLebar(4);
   daftar[0].setTinggi(2);
   
   // menampilkan nilai atribut dan volume objek pertama
   std::cout<<"Objek pertama"<<std::endl;
   daftar[0].cetakAtribut();
   daftar[0].cetakVolume();
   
   // menentukan nilai atribut untuk objek kedua
   daftar[1].setPanjang(8);
   daftar[1].setLebar(6);
   daftar[1].setTinggi(4);
   
   // menampilkan nilai atribut dan volume objek kedua
   std::cout<<"\nObjek kedua"<<std::endl;
   daftar[1].cetakAtribut();
   daftar[1].cetakVolume();
   
   // menentukan nilai atribut untuk objek ketiga
   daftar[2].setPanjang(10);
   daftar[2].setLebar(8);
   daftar[2].setTinggi(6);
   
   // menampilkan nilai atribut dan volume objek kedua
   std::cout<<"\nObjek ketiga"<<std::endl;
   daftar[2].cetakAtribut();
   daftar[2].cetakVolume();
   
   return 0;
}

