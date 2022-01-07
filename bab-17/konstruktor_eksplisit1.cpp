/******************************************************
Nama file: konstruktor_eksplisit1.cpp (SALAH)
*******************************************************/

#include <iostream>

class Contoh {
private:
   int x;
public:
   // konstruktor eksplisit
   explicit Contoh(int x) {
      this->x = x;
   }
   
   void setX(int x) {
      this->x = x;
   }
   
   int getX() {
      return x;
   }
};

int main() {   
   // memanggil konstruktor dengan operator sama dengan (=)
   Contoh obj1 = 10;	// salah
   
   // memanggil konstruktor secara langsung
   Contoh obj2(10);		// benar
   	
   std::cout<<"Nilai x pada obj1: "<<obj1.getX()<<std::endl;
   std::cout<<"Nilai x pada obj2: "<<obj2.getX()<<std::endl;

   return 0;
}
