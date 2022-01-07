/******************************************************
Nama file: variabel5.cpp
*******************************************************/

#include <iostream>
#include <typeinfo>  // untuk typeid()

int main() {
   // inisialisasi variabel
   auto a {10};     // a diisi dengan tipe int
   auto b {4.95};   // b diisi dengan tipe double
   auto c {'B'};    // c diisi dengan tipe char
   auto d {4.95F};  // d diisi dengan tipe float     
   
   // menampilkan nilai
   std::cout<<"a = "<<a<<std::endl;
   std::cout<<"b = "<<b<<std::endl;
   std::cout<<"c = "<<c<<std::endl;
   std::cout<<"d = "<<d<<std::endl<<std::endl;
   
   // menampilkan tipe data
   std::cout<<"Tipe data a: "<<typeid(a).name()<<std::endl;
   std::cout<<"Tipe data b: "<<typeid(b).name()<<std::endl;
   std::cout<<"Tipe data c: "<<typeid(c).name()<<std::endl;
   std::cout<<"Tipe data d: "<<typeid(d).name()<<std::endl;
   
   return 0;
}
