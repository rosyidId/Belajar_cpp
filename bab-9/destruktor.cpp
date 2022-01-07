/******************************************************
Nama file: destruktor.cpp
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
      std::cout<<"Konstruktor dipanggil..."<<std::endl;
      this->panjang = panjang;
      this->lebar = lebar;
      this->tinggi = tinggi;
   }
   
   ~Balok() {
      std::cout<<"Destruktor dipanggil..."<<std::endl;
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
      std::cout<<"Volume balok = "
               <<volume()
               <<std::endl;
   }
};

int main() {
   Balok *obj;
   
   obj = new Balok(6,4,2);  // akan memanggil konstruktor 
   obj->cetakVolume();  
   
   delete obj;  // akan memanggil destruktor
   
   return 0;
}

