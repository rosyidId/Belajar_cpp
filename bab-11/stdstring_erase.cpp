/******************************************************
Nama file: stdstring_erase.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

int main() {   
   std::string s = "Master C++";
   
   // menampilkan string sebelum dihapus
   std::cout<<"Sebelum dihapus"<<std::endl;
   std::cout<<"s: "<<s<<std::endl;
   std::cout<<"Jumlah karakter: "
            <<s.length()
            <<std::endl;

   // menghapus substring "Master "
   s.erase(0, 7);

   // menampilkan string setelah dihapus
   std::cout<<"\nSetelah dihapus"<<std::endl;
   std::cout<<"s: "<<s<<std::endl;
   std::cout<<"Jumlah karakter: "
            <<s.length()
            <<std::endl;

   // mengosongkan string
   s.erase();

   // menampilkan string setelah dikosongkan
   std::cout<<"\nSetelah dikosongkan"<<std::endl;
   std::cout<<"s: "<<s<<std::endl;
   std::cout<<"Jumlah karakter: "
            <<s.length()<<std::endl;
   
   return 0;
}
