/******************************************************
Nama file: kelas_sederhana.cpp
*******************************************************/

#include <iostream>
#include <iomanip>	// std::fixed

// mendefinisikan kelas
class Balok {
public:
   double panjang;
   double lebar;
   double tinggi;
};					// harus diakhiri tanda titik koma

int main() {
   // mendeklarasikan pointer ke tipe Balok
   Balok *obj;
   
   // membuat objek dari kelas Balok
   obj = new Balok();
   
   // mengisi nilai-nilai atribut
   obj->panjang = 6;
   obj->lebar = 4;
   obj->tinggi = 2;
   
   // menghitung volume balok
   double volume = obj->panjang * obj->lebar * obj->tinggi;
   
   // menampilkan volume
   std::cout<<std::fixed;
   std::cout<<"Volume balok = "<<volume<<std::endl;
   
   return 0;
}

