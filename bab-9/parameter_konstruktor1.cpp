/******************************************************
Nama file: parameter_konstruktor1.cpp
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
   double p, l, t;
   
   std::cout<<"Masukkan panjang: ";
   std::cin>>p;
   std::cout<<"Masukkan lebar: ";
   std::cin>>l;
   std::cout<<"Masukkan tinggi: ";
   std::cin>>t;
   
   obj = new Balok(p,l,t);   
   obj->cetakVolume();  
   
   delete obj;
   
   return 0;
}

