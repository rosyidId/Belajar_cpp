/******************************************************
Nama file: member_function.cpp
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
   
   // mendefinisikan fungsi anggota (member function)
   double volume() {
      return panjang * lebar * tinggi;
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
   
   // menghitung volume balok
   double volume = obj->volume();
   
   // menampilkan volume
   std::cout<<std::fixed;
   std::cout<<"Volume balok = "<<volume<<std::endl;
   
   return 0;
}

