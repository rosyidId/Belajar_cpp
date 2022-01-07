/******************************************************
Nama file: member_function1.cpp
*******************************************************/

#include <iostream>
#include <iomanip>	// std::fixed

// mendefinisikan kelas
class Balok {
public:
   // deklarasi atribut
   double panjang;
   double lebar;
   double tinggi;
   
   // menghitung volume
   double volume() {
      return panjang * lebar * tinggi;
   }
   
   // menampilkan volume
   void cetakVolume() {
      std::cout<<std::fixed;
      std::cout<<"Volume balok = "
               <<volume()		// memanggil fungsi volume()
               <<std::endl;
   }
};

int main() {
   // mendeklarasikan pointer ke tipe Balok
   Balok *obj;
   
   // membuat objek dari kelas Balok
   obj = new Balok();
   
   // mengisi nilai-nilai atribut
   obj->panjang = 6;
   obj->lebar = 4;
   obj->tinggi = 2;  
   
   // menampilkan volume
   obj->cetakVolume();
   
   return 0;
}

