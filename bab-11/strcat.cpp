/******************************************************
Nama file: strcat.cpp
*******************************************************/

#include <iostream>
#include <cstring>	// strcat()

int main() {
   char s1[16] = "Pemrograman ";
   char* s2 = (char*) "C++";
   
   // menampilkan nilai variabel s1 dan s2
   std::cout<<"Sebelum disambung"<<std::endl;
   std::cout<<"s1: "<<s1<<std::endl;
   std::cout<<"s2: "<<s2<<std::endl;

   // menyambung s2 ke s1
   strcat(s1, s2);

   // menampilkan kembali nilai variabel s1 dan s2
   std::cout<<"\nSetelah disambung"<<std::endl;
   std::cout<<"s1: "<<s1<<std::endl;
   std::cout<<"s2: "<<s2<<std::endl;
   
   return 0;
}
