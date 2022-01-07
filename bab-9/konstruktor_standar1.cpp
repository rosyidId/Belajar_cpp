/******************************************************
Nama file: konstruktor_standar1.cpp
*******************************************************/

#include <iostream>

// mendefinisikan kelas
class Contoh {
public:
   Contoh() = default;
   Contoh(std::string s) {
      std::cout<<s<<std::endl;
   }
};

int main() {   
   std::cout<<"Membuat objek menggunakan konstruktor standar"
            <<std::endl;
   Contoh *obj1;
   obj1 = new Contoh();	// akan memanggil konstruktor standar 
   
   // akan memanggil konstruktor lain
   Contoh *obj2;
   obj2 = new Contoh("Membuat objek menggunakan konstruktor lain");
   
   delete obj1;
   delete obj2;
   
   return 0;
}

