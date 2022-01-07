/******************************************************
Nama file: konstruktor_eksplisit.cpp
*******************************************************/

#include <iostream>

class Contoh {
private:
   int x;
public:
   // konstruktor dengan satu parameter bertipe int
   Contoh(int x) {
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
   Contoh obj1 = 10;
   
   // memanggil konstruktor secara langsung
   Contoh obj2(10);
   	
   std::cout<<"Nilai x pada obj1: "<<obj1.getX()<<std::endl;
   std::cout<<"Nilai x pada obj2: "<<obj2.getX()<<std::endl;

   return 0;
}
