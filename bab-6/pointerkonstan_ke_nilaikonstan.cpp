/******************************************************
Nama file: pointerkonstan_ke_nilaikonstan.cpp
*******************************************************/

#include <iostream>

int main() {
   const int A = 10;
   const int B = 11;
   
   const int * const p {&A};        
   
   std::cout<<"p menunjuk alamat A"<<std::endl;
   std::cout<<"Nilai *p\t: "<<*p<<std::endl;
   std::cout<<"Nilai p\t\t: "<<p<<std::endl;
   
   // p = &B;	// salah
   
   // *p = B;	// salah   
   
   return 0;
}
