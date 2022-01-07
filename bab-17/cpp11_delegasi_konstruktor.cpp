/******************************************************
Nama file: cpp11_delegasi_konstruktor.cpp
*******************************************************/

#include <iostream>

class Titik {
private:
   int x;
   int y;
public:
   // konstrukor pertama, 
   // menggunakan parameter
   Titik(int x, int y) {
      this->x = x;
      this->y = y;
   }
   
   // konstruktor kedua,
   // tanpa parameter
   Titik(): Titik(0, 0) {} // memanggil konstruktor pertama 

   int getX() {
      return x;
   }
   
   int getY() {
      return y;
   }
};

int main() {
   Titik *P = new Titik();

   std::cout<< "P("
            <<P->getX()
            <<","
            <<P->getY()
            <<")";
   delete P;

   return 0;
}
