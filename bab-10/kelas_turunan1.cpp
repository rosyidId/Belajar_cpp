/******************************************************
Nama file: kelas_turunan1.cpp
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

// mendefinisikan kelas turunan
class BalokWarna: public Balok {
private:
   std::string warna;	// mendefinisikan atribut baru
public:
   void setWarna(std::string warna) {
      this->warna = warna;
   }
   
   std::string getWarna() {
      return warna;
   }
};

int main() {
   // membuat objek dari kelas BalokWarna
   BalokWarna obj;
      
   obj.setPanjang(6);	// memanggil Balok::setPanjang()      
   obj.setLebar(4);		// memanggil Balok::setLebar()   
   obj.setTinggi(2);	// memanggil Balok::setTinggi()
   obj.setWarna("merah");	// memanggil BalokWarna::setWarna()
   
   // menampilkan nilai atribut dan volume
   std::cout<<"panjang\t\t: "
            <<obj.getPanjang()	// memanggil Balok::getPanjang()
            <<std::endl;
   std::cout<<"lebar\t\t: "
            <<obj.getLebar()	// memanggil Balok::getLebar()
            <<std::endl;
   std::cout<<"tinggi\t\t: "
            <<obj.getTinggi()	// memanggil Balok::getTinggi()
            <<std::endl;
   std::cout<<"warna\t\t: "
            <<obj.getWarna()	// memanggil BalokWarna::getWarna()
            <<std::endl;
   obj.cetakVolume();	// memanggil Balok::cetakVolume()
      
   return 0;
}

