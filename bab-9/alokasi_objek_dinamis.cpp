/******************************************************
Nama file: alokasi_objek_dinamis.cpp
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
   // pointer ke tipe Balok
   Balok *obj;
   
   // membuat objek pertama
   obj = new Balok();
      
   // mengisi nilai-nilai atribut dari objek pertama
   obj->setPanjang(6);
   obj->setLebar(4);
   obj->setTinggi(2);
   
   // menampilkan volume objek pertama
   std::cout<<"Objek pertama"<<std::endl;
   obj->cetakVolume();
   
   // menghapus objek pertama dari memori komputer
   delete obj;
   
   // membuat objek kedua
   obj = new Balok();
      
   // mengisi nilai-nilai atribut dari objek kedua
   obj->setPanjang(10);
   obj->setLebar(8);
   obj->setTinggi(6);
   
   // menampilkan volume objek kedua
   std::cout<<"\nObjek kedua"<<std::endl;
   obj->cetakVolume();
   
   // menghapus objek kedua dari memori komputer
   delete obj;
   
   return 0;
}

