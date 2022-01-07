/******************************************************
Nama file: mutable.cpp
*******************************************************/

#include <iostream>

class Contoh {
   mutable int x;
public:
   void setx(int nilai) const {
      x = nilai;   // benar
   }
  
   int getx() const {
      return x;    // benar
   }
};

int main() {   
   Contoh *p;
	
   p = new Contoh;
	
   p->setx(3);	
   std::cout<<"Nilai atribut x: "
            <<p->getx();

   delete p;

   return 0;
}
