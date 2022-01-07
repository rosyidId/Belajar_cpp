/******************************************************
Nama file: parameter_non_konstan.cpp
*******************************************************/

#include <iostream>

void upperCase(std::string& s) {
   for (auto& e: s) {
      e = toupper(e);
   }
}

int main() {
   std::string str {"pemrograman c++"};
   
   std::cout<<"Sebelum diubah: "<<str<<std::endl;
   
   // memanggil fungsi upperCase()
   upperCase(str);
   
   std::cout<<"Setelah diubah: "<<str<<std::endl;
   
   return 0;
}
