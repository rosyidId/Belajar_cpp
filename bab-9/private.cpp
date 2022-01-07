/******************************************************
Nama file: private.cpp
*******************************************************/

#include <iostream>
#include <iomanip>	// std::fixed

// mendefinisikan kelas
class Balok {
private:
   // atribut bersifat private
   double panjang;
   double lebar;
   double tinggi;
   
   // metode yang bersifat private
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
               <<volume()		// memanggil fungsi volume()
               <<std::endl;
   }
};

int main() {
   Balok *obj;
   obj = new Balok();
   
   // mengisi nilai-nilai atribut
   // dengan mengaksesnya secara langsung
   //obj->panjang = 6;		// salah
   //obj->lebar = 4;		// salah
   //obj->tinggi = 2;  		// salah
   
   // mengisi nilai-nilai atribut
   // melalui fungsi
   obj->setPanjang(6);
   obj->setLebar(4);
   obj->setTinggi(2);
   
   // fungsi volume() tidak dapat diakses dari sini
   //double volume = obj->volume();	// salah
   
   // menampilkan volume
   obj->cetakVolume();
   
   return 0;
}

