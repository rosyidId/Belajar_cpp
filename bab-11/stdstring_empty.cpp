/******************************************************
Nama file: stdstring_empty.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

int main() {   
   std::string nama;
   
   for ( ; ; ) {
      std::cout<<"Masukkan nama Anda: ";
      getline(std::cin, nama);
      if (!nama.empty()) break;
      std::cout<<"SALAH: Nama tidak boleh kosong\n\n";
   }
   
   std::cout<<"Hai "<<nama<<", apa kabar?";
   
   return 0;
}
