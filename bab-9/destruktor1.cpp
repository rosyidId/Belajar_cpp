/******************************************************
Nama file: destruktor1.cpp
*******************************************************/

#include <iostream>
#include <cstring>	// strcpy()


class Siswa {
private:
   char *nim;	// pointer ke karakter
   char *nama;	// pointer ke karakter
   int umur;
   
public:
   Siswa() {
      // alokasi memori untuk atribut nim
      this->nim = new char[4];
      
      // alokasi memori untuk atribut nama
      this->nama = new char[25];
      
      this->umur = umur;
   }
   
   ~Siswa() {
      // dealokasi memori untuk atribut nim
      delete [] nim;
      
      // dealokasi memori untuk atribut nama
      delete [] nama;
   }
   
   void setNim(const char *nim) {
      strcpy(this->nim, nim);
   }
   
   char *getNim() {
      return nim;
   }
   
   void setNama(const char *nama) {
      strcpy(this->nama, nama);
   }
   
   char *getNama() {
      return nama;
   }
   
   void setUmur(int umur) {
      this->umur = umur;
   }
   
   double getUmur() {
      return umur;
   }
   
   void cetakSiswa() {
      std::cout<<"NIM\t: "<<nim<<std::endl;
      std::cout<<"Nama\t: "<<nama<<std::endl;
      std::cout<<"Umur\t: "<<umur<<std::endl;
   }
};

int main() {
   Siswa *obj;
   
   obj = new Siswa(); 
   
   // mengisi nilai-nilai atribut
   obj->setNim("123");
   obj->setNama("Muhammad Adam");
   obj->setUmur(20);
   
   obj->cetakSiswa();      
   
   delete obj;
   
   return 0;
}
