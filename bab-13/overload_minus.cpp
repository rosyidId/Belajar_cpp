/******************************************************
Nama file: overload_minus.cpp
*******************************************************/

#include <iostream>

class BilanganBulat {
private:
   int nilai;
public:  
   // konstruktor
   BilanganBulat(int nilai) {
      this->nilai = nilai;
   }
  
   void setNilai(int nilai) {
      this->nilai = nilai;
   }
   
   int getNilai() {
      return nilai;
   }
  
   // overload operator minus (-)
   BilanganBulat operator -(BilanganBulat obj) {      
      return nilai - obj.getNilai();
   }
   
};

int main() {   
   // membuat objek dari kelas BilanganBulat
   BilanganBulat a {9};
   BilanganBulat b {5};
   
   // menggunakan operator - diterapkan
   // pada objek dari kelas BilanganBulat
   BilanganBulat c = a - b;
   
   std::cout<<"a.getNilai(): "<<a.getNilai()
            <<std::endl;
   std::cout<<"b.getNilai(): "<<b.getNilai()
            <<std::endl;
   std::cout<<"c.getNilai(): "<<c.getNilai()
            <<std::endl;

   return 0;
}
