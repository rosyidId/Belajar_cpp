/******************************************************
Nama file: strlen.cpp
*******************************************************/

#include <iostream>
#include <cstring>	// strlen()

int main() {
   char s1[12] = "Pemrograman";
   char s2[4] = "C++";
   
   // menampilkan nilai variabel s1 dan s2
   std::cout<<"s1: "<<s1<<std::endl;
   std::cout<<"s2: "<<s2<<std::endl;

   // menampilkan jumlah karakter dalam variabel s1 dan s2
   std::cout<<"\nJumlah karakter s1: "<<strlen(s1)<<std::endl;
   std::cout<<"Jumlah karakter s2: "<<strlen(s2)<<std::endl;
   
   return 0;
}
