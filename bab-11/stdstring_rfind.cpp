/******************************************************
Nama file: stdstring_rfind.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

int main() {   
   std::string s = "C dan C++";   

   // mencari indeks karakter 'C' yang pertama ditemukan
   size_t indeks1 = s.find('C');
   
   // mencari indeks karakter 'C' yang terakhir ditemukan   
   size_t indeks2 = s.rfind('C');
   
   std::cout<<"s: "<<s<<std::endl;
   std::cout<<"Indeks karakter \'C\' pertama\t: "<<indeks1
            <<std::endl;
   std::cout<<"Indeks karakter \'C\' terakhir\t: "<<indeks2
            <<std::endl;
   
   return 0;
}
