/******************************************************
Nama file: parameter_opsional.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

void cetakString(std::string s, bool barisBaru=true) {
   std::cout<<s;
   if (barisBaru) std::cout<<std::endl;
}

int main() {
   cetakString("Pemrograman ", false);
   cetakString("C++");
   cetakString("Informatika ", false);
   cetakString("Bandung");
   
   return 0;
}
