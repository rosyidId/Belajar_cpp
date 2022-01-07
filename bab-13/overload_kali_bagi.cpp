/******************************************************
Nama file: overload_kali_bagi.cpp
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
  
   // overload operator *
   BilanganBulat operator *(BilanganBulat obj) {      
      return nilai * obj.getNilai();
   }
   
   // overload operator /
   BilanganBulat operator /(BilanganBulat obj) {      
      return nilai / obj.getNilai();
   }
   
};

int main() {   
   // membuat objek dari kelas BilanganBulat
   BilanganBulat a {15};
   BilanganBulat b {5};
      
   BilanganBulat c = a * b;
   BilanganBulat d = a / b;
   
   std::cout<<"a.getNilai(): "<<a.getNilai()
            <<std::endl;
   std::cout<<"b.getNilai(): "<<b.getNilai()
            <<std::endl;
   std::cout<<"c.getNilai(): "<<c.getNilai()
            <<std::endl;
   std::cout<<"d.getNilai(): "<<d.getNilai()
            <<std::endl;

   return 0;
}
