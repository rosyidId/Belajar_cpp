/******************************************************
Nama file: cpp14_string_literal.cpp
*******************************************************/

#include <iostream>

using namespace std::string_literals;

std::string concat(std::string s1, std::string s2) {
   return s1 + s2;
}

int main() {
   // memanggil fungsi concat()
   std::cout<<concat("Pemrograman "s, "C++"s);

   return 0;
}
