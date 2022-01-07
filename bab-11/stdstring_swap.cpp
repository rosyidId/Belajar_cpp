/******************************************************
Nama file: stdstring_swap.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

int main() {   
   std::string s1 = "GTK+";
   std::string s2 = "Qt";
   
   // menampilkan string sebelum ditukar
   std::cout<<"Sebelum ditukar"<<std::endl;
   std::cout<<"s1: "<<s1<<std::endl;
   std::cout<<"s2: "<<s2<<std::endl;

   // menukar string
   s1.swap(s2);

   // menampilkan string setelah ditukar
   std::cout<<"\nSetelah ditukar"<<std::endl;
   std::cout<<"s1: "<<s1<<std::endl;
   std::cout<<"s2: "<<s2<<std::endl;
   
   return 0;
}
