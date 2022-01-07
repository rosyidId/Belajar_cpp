/******************************************************
Nama file: konstruktor_standar.cpp
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
   Contoh obj1;	// akan memanggil konstruktor standar 
   
   // akan memanggil konstruktor lain
   Contoh obj2("Membuat objek menggunakan konstruktor lain");
   
   return 0;
}

