/******************************************************
Nama file: friend_function.cpp
*******************************************************/

#include <iostream>

class Contoh {
private:
   int x;	// x bersifat private
public:   
   // mendeklarasikan dua buah fungsi teman
   friend void setNilaiX(Contoh& obj, int nilai);
   friend int getNilaiX(Contoh& obj);
};

// implementasi fungsi teman
void setNilaiX(Contoh& obj, int nilai) {
   obj.x = nilai;	// benar
}

int getNilaiX(Contoh& obj) {
   return obj.x;	// benar
}

int main() {   
   // membuat objek dari kelas Contoh
   Contoh obj;
   
   // mengisi nilai ke dalam atribut x milik obj
   // melalui fungsi setNilaiX()
   setNilaiX(obj, 99);
   
   // mengakses nilai atribut x milik obj
   // melalui fungsi getNilaiX()
   std::cout<<"Nilai atribut x: "<<getNilaiX(obj);
   
   return 0;
}
