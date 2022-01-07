/******************************************************
Nama file: konstruktor.cpp
*******************************************************/

#include <iostream>

// mendefinisikan kelas
class Contoh {
public:  
   // mendefinisikan konstruktor
   Contoh() {
      std::cout<<"Konstruktor dipanggil..."<<std::endl;
   }   
};

int main() {
   // membuat objek dengan cara statis
   std::cout<<"Membuat objek dengan cara statis:"<<std::endl;
   Contoh obj1;	// akan memanggil konstruktor
      
   // membuat objek dengan cara dinamis
   std::cout<<"\nMembuat objek dengan cara dinamis:"<<std::endl;
   Contoh *obj2;
   obj2 = new Contoh();	// akan memanggil konstruktor
      
   delete obj2;
   
   return 0;
}

