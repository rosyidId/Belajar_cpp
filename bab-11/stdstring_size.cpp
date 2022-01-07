/******************************************************
Nama file: stdstring_size.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

int main() {
   std::string s1 = "Master";
   std::string s2 = "C++";

   // menampilkan panjang string
   std::cout<<"s1: "<<s1<<std::endl;
   std::cout<<"s2: "<<s2<<std::endl;
   std::cout<<"Panjang string s1: "
            <<s1.size()<<std::endl;
   std::cout<<"Panjang string s2: "
            <<s2.size()<<std::endl;
   
   return 0;
}
