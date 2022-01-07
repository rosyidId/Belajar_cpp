/******************************************************
Nama file: parameter_konstruktor2.cpp
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
   // konstruktor dengan parameter opsional
   Balok(double p=10.0, double l=9.0, double t=8.0) {
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
   
   // memanggil konstruktor tanpa menyertakan
   // parameter aktual
   obj = new Balok();   
   obj->cetakVolume();  
   
   delete obj;
   
   return 0;
}
