/******************************************************
Nama file: pointer_konstan.cpp
*******************************************************/

#include <iostream>

int main() {
   int a {10}, b {11};
   
   int * const p {&a};	// pointer konstan        
   
   std::cout<<"p menunjuk alamat a (sebelum *p diubah)"<<std::endl;
   std::cout<<"Nilai *p\t: "<<*p<<std::endl;
   std::cout<<"Nilai p\t\t: "<<p<<std::endl;
   
   // p = &b;	// salah
   
   *p = b;	// benar, nilai a masih dapat diubah melalui p
   
   std::cout<<"\np menunjuk alamat a (setelah *p diubah)"
            <<std::endl;
   std::cout<<"Nilai *p\t: "<<*p<<std::endl;
   std::cout<<"Nilai p\t\t: "<<p<<std::endl;
   
   return 0;
}
