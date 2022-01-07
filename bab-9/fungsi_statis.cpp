/******************************************************
Nama file: fungsi_statis.cpp
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
   // atribut statis
   static int jumlahObjek;
   
   Balok(double panjang, double lebar, double tinggi) {
      this->panjang = panjang;
      this->lebar = lebar;
      this->tinggi = tinggi;      
      jumlahObjek++;
   }
   
   // fungsi statis
   static int getJumlahObjek() {
      return jumlahObjek;
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
   
   void cetakVolume(std::string nama) {
      std::cout<<std::fixed;
      std::cout<<"Volume "<<nama<<" = "
               <<volume()
               <<std::endl;
   }
};

int Balok::jumlahObjek {0};

int main() {   
   // menampilkan jumlah objek balok sebelum objek dibuat
   std::cout<<"Keadaan awal"<<std::endl;
   std::cout<<"Jumlah balok: "
            <<Balok::getJumlahObjek()  // memanggil fungsi statis
            <<std::endl<<std::endl;
   
   // membuat tiga objek balok
   Balok *obj1 = new Balok(10,9,8);
   Balok *obj2 = new Balok(8,6,4);
   Balok *obj3 = new Balok(6,4,2);
   
   // menampilkan volume balok
   obj1->cetakVolume("obj1");
   obj2->cetakVolume("obj2");
   obj3->cetakVolume("obj3");
   
   delete obj1;
   delete obj2;
   delete obj3;
   
   // menampilkan jumlah objek balok setelah objek dibuat
   std::cout<<"\nKeadaan akhir"<<std::endl;
   std::cout<<"Jumlah balok: "
            <<Balok::getJumlahObjek()  // memanggil fungsi statis
            <<std::endl;
   
   return 0;
}

