/******************************************************
Nama file: fungsi_gaya_baru1.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

auto cetakString(std::string s, bool barisBaru=true) -> void {
   std::cout<<s;
   if (barisBaru) std::cout<<std::endl;
}

int main() {
   // memanggil fungsi
   cetakString("Pemrograman ", false);
   cetakString("C++");
   cetakString("Informatika ", false);
   cetakString("Bandung");
   
   return 0;
}
