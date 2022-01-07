/******************************************************
Nama file: konversi_pointer.cpp
*******************************************************/

#include <iostream>
#include <iomanip>	// std::fixed

int main() {
   double b {0.0};
   int *p;
   
   //p = &b;	// salah
   p = (int *) &b;
   
   std::cout<<std::fixed;
   std::cout<<"Nilai b\t\t: "<<b<<std::endl;
   std::cout<<"Nilai *p\t: "<<*p<<std::endl;
   std::cout<<"Nilai &b\t: "<<&b<<std::endl;
   std::cout<<"Nilai p\t\t: "<<p<<std::endl;
   
   return 0;
}
