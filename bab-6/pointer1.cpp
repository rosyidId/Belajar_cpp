/******************************************************
Nama file: pointer1.cpp
*******************************************************/

#include <iostream>

int main() {
   int a {10}, b {11}, c {12};
   int *p;
   
   // p menunjuk ke alamat a
   p = &a;
   
   std::cout<<"p menunjuk ke alamat a"<<std::endl;
   std::cout<<"Nilai a\t\t: "<<a<<std::endl;
   std::cout<<"Nilai *p\t: "<<*p<<std::endl;
   std::cout<<"Nilai &a\t: "<<&a<<std::endl;
   std::cout<<"Nilai p\t\t: "<<p<<std::endl;
   
   // p menunjuk ke alamat b
   p = &b;
   
   std::cout<<"\np menunjuk ke alamat b"<<std::endl;
   std::cout<<"Nilai b\t\t: "<<b<<std::endl;
   std::cout<<"Nilai *p\t: "<<*p<<std::endl;
   std::cout<<"Nilai &b\t: "<<&b<<std::endl;
   std::cout<<"Nilai p\t\t: "<<p<<std::endl;
   
   // p menunjuk ke alamat c
   p = &c;
   
   std::cout<<"\np menunjuk ke alamat c"<<std::endl;
   std::cout<<"Nilai c\t\t: "<<c<<std::endl;
   std::cout<<"Nilai *p\t: "<<*p<<std::endl;
   std::cout<<"Nilai &c\t: "<<&c<<std::endl;
   std::cout<<"Nilai p\t\t: "<<p<<std::endl;
   
   return 0;
}
