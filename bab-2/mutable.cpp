/******************************************************
Nama file: mutable.cpp
*******************************************************/

#include <iostream>

class Contoh {
public:
   mutable int a;  // anggota kelas dengan kelas penyimpanan "mutable"
   int b;  // anggota kelas non-mutable
   Contoh(int a, int b) {
      this->a = a;
      this->b = b;
   }
};

int main() {   
   // membuat objek konstan dari kelas Contoh
   const Contoh obj(10,20);
   
   // menampilkan nilai a dan b di dalam obj
   std::cout<<"Sebelum diubah"<<std::endl;
   std::cout<<"Nilai a: "<<obj.a<<std::endl;
   std::cout<<"Nilai b: "<<obj.b<<std::endl;
   
   // mengubah nilai a
   obj.a = 88;  // obj.a bisa diubah karena a bersifat mutable
   
   // mengubah nilai b
   // obj.b = 99;  // salah, b tidak dapat diubah 
   
   std::cout<<std::endl;
   std::cout<<"Setelah diubah"<<std::endl;
   std::cout<<"Nilai a: "<<obj.a<<std::endl;
   std::cout<<"Nilai b: "<<obj.b<<std::endl;
   
   return 0;
}
