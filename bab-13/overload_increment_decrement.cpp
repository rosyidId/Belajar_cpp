/******************************************************
Nama file: overload_increment_decrement.cpp
*******************************************************/

#include <iostream>

class BilanganBulat {
private:
   int nilai;
public:  
   // konstruktor
   BilanganBulat() = default;
   BilanganBulat(int nilai) {
      this->nilai = nilai;
   }
  
   void setNilai(int nilai) {
      this->nilai = nilai;
   }
   
   int getNilai() {
      return nilai;
   }
  
   // overload operator ++ (pre-increment)
   BilanganBulat operator ++() {      
      nilai += 1;
      return *this;
   }
   
   // overload operator ++ (post-increment)
   BilanganBulat operator ++(int) {      
      nilai += 1;
      return *this;
   }
   
   // overload operator -- (pre-decrement)
   BilanganBulat operator --() {      
      nilai -= 1;
      return *this;
   }
   
   // overload operator -- (post-decrement)
   BilanganBulat operator --(int) {      
      nilai -= 1;
      return *this;
   }
};

int main() {   
   // membuat objek dari kelas BilanganBulat
   BilanganBulat a, b;
   
   a = 9;
   b = 9;
   
   std::cout<<"Sebelum increment dan decrement:"<<std::endl;
   std::cout<<"a.getNilai(): "<<a.getNilai()
            <<std::endl;
   std::cout<<"b.getNilai(): "<<b.getNilai()
            <<std::endl;
   
   // post-increment a
   a++;
   
   // post-decrement b
   b--;
   
   std::cout<<"\nSetelah increment dan decrement:"<<std::endl;
   std::cout<<"a.getNilai(): "<<a.getNilai()
            <<std::endl;
   std::cout<<"b.getNilai(): "<<b.getNilai()
            <<std::endl;

   return 0;
}
