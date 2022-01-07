/******************************************************
Nama file: fungsi.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

// mendefinisikan fungsi
void cetak(std::string s) {
   std::cout<<s<<std::endl;
}

int main() {
   
   // memanggil fungsi
   cetak("Pemrograman");
   cetak("C++");
   
   return 0;
}
