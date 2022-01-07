/******************************************************
Nama file: cpp17_string_view.cpp
*******************************************************/

#include <iostream>
#include <string_view>	// std::string_view

void cetakString(std::string_view& s) {
   std::cout<<s<<std::endl;
}

int main() {      
   // memanggil fungsi cetakString()
   std::string_view str = "Pemrograman C++";
   cetakString(str);

   return 0;
}
