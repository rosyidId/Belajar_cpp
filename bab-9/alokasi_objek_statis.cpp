/******************************************************
Nama file: alokasi_objek_statis.cpp
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
   // membuat objek dengan cara statis
   Balok obj;
      
   // mengisi nilai-nilai atribut
   obj.setPanjang(6);
   obj.setLebar(4);
   obj.setTinggi(2);
   
   // menampilkan volume
   obj.cetakVolume();
   
   return 0;
}

