/******************************************************
Nama file: friend_class.cpp
*******************************************************/

#include <iostream>

class Pertama {
private:
   int x;	// x bersifat private
public:
   Pertama(int x) {
      this->x = x;
   }
   
   // mendeklarasikan kelas teman
   friend class Kedua;
};

class Kedua {
public:
   void setNilaiX(Pertama& obj, int nilai) {
      obj.x = nilai;	// benar
   }

   int getNilaiX(Pertama& obj) {
      return obj.x;	// benar
   }
};

int main() {   
   // membuat objek dari kelas Pertama
   Pertama obj1(0);	// mula-mula obj1.x bernilai 0
   
   // membuat objek dari kelas Kedua
   Kedua obj2;
   
   // mengisi nilai ke dalam atribut x milik obj1
   // melalui fungsi Kedua::setNilaiX()
   obj2.setNilaiX(obj1, 99);
   
   // mengakses nilai atribut x milik obj1
   // melalui fungsi Kedua::getNilaiX()
   std::cout<<"Nilai atribut x pada obj1: "
            <<obj2.getNilaiX(obj1);
   
   return 0;
}
