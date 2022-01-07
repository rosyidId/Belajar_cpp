/******************************************************
Nama file: stdstring_pushback_popback.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

int main() {   
   std::string s;
   
   // menambah karakter ke dalam s
   s.push_back('C');
   s.push_back('+');
   s.push_back('+');
   
   std::cout<<"Sebelum karakter terakhir dihapus: "
            <<s<<std::endl;
   
   // menghapus karakter terakhir
   s.pop_back();
   
   std::cout<<"Setelah karakter terakhir dihapus: "
            <<s<<std::endl;
   
   return 0;
}
