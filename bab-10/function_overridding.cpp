/******************************************************
Nama file: function_overridding.cpp
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
   Balok() = default;
   Balok(double panjang, double lebar, double tinggi) {
      this->panjang = panjang;
      this->lebar = lebar;
      this->tinggi = tinggi;
   }
   
   // destruktor virtual
   virtual ~Balok() { }
   
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
   
   // fungsi virtual
   virtual void cetakAtribut() {
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
   
   // memodifikasi fungsi Balok::cetakAtribut()
   void cetakAtribut() override {
      // memanggil fungsi Balok::cetakAtribut()
      Balok::cetakAtribut();
      
      // menambah sifat baru
      std::cout<<"warna\t\t: "<<warna<<std::endl;
   }
      
};

int main() {
   // pointer ke kelas BalokWarna
   BalokWarna *obj;

   // membuat objek dari kelas BalokWarna
   obj = new BalokWarna(6,4,2,"merah");
   
   // menampilkan nilai-nilai atribut dan volume objek kedua
   obj->cetakAtribut();
   obj->cetakVolume();
   
   delete obj;
   
   return 0;
}
