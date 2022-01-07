/******************************************************
Nama file: stdstring_clear.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

int main() {   
   std::string s = "Master C++";   
   
   std::cout<<"Sebelum dikosongkan"<<std::endl;
   std::cout<<"s: \""<<s<<"\""<<std::endl;
   std::cout<<"Jumlah karakter: "<<s.length()<<std::endl;
   
   // mengosongkan string
   s.clear();
   
   std::cout<<"\nSetelah dikosongkan"<<std::endl;
   std::cout<<"s: \""<<s<<"\""<<std::endl;
   std::cout<<"Jumlah karakter: "<<s.length()<<std::endl;
   
   return 0;
}
