/******************************************************
Nama file: stdstring_front.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

int main() {   
   std::string s = "qt";   
   
   std::cout<<"Keadaan awal"<<std::endl;
   std::cout<<"s: "<<s<<std::endl;
   std::cout<<"Karakter pertama: "<<s.front()<<std::endl;
   
   // mengubah karakter pertama dari 'q' menjadi 'Q'
   s.front() = 'Q';
   
   std::cout<<"\nKeadaan akhir"<<std::endl;
   std::cout<<"s: "<<s<<std::endl;
   std::cout<<"Karakter pertama: "<<s.front()<<std::endl;
   
   return 0;
}
