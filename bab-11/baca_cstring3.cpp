/******************************************************
Nama file: baca_cstring3.cpp
*******************************************************/

#include <iostream>

int main() {
   char nama[30];
   
   std::cout<<"Masukkan nama lengkap: ";
   std::cin.getline(nama, sizeof(nama)-1);
   
   std::cout<<"Hai "<<nama<<", apa kabar?"<<std::endl;
      
   return 0;
}
