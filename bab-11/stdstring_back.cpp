/******************************************************
Nama file: stdstring_back.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

int main() {   
   std::string s = "GTK.";   
   
   std::cout<<"Keadaan awal"<<std::endl;
   std::cout<<"s: "<<s<<std::endl;
   std::cout<<"Karakter terakhir: "<<s.back()<<std::endl;
   
   // mengubah karakter terakhir dari '.' menjadi '+'
   s.back() = '+';
   
   std::cout<<"\nKeadaan akhir"<<std::endl;
   std::cout<<"s: "<<s<<std::endl;
   std::cout<<"Karakter terakhir: "<<s.back()<<std::endl;
   
   return 0;
}
