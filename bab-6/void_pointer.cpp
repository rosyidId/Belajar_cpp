/******************************************************
Nama file: void_pointer.cpp
*******************************************************/

#include <iostream>

int main() {
   int i {10};
   float f {0.25F};
   double d {123.456};
   
   void *p {nullptr};
   
   // p menunjuk ke alamat i (bertipe int)
   p = &i;
   std::cout<<"p menunjuk ke alamat i"<<std::endl;
   std::cout<<"Nilai *p\t: "<<*((int*) p)<<std::endl;
   std::cout<<"Nilai p\t\t: "<<p<<std::endl;
   
   // p menunjuk ke alamat f (bertipe float)
   p = &f;
   std::cout<<"\np menunjuk ke alamat f"<<std::endl;
   std::cout<<"Nilai *p\t: "<<*((float*) p)<<std::endl;
   std::cout<<"Nilai p\t\t: "<<p<<std::endl;
   
   // p menunjuk ke alamat d (bertipe double)
   p = &d;
   std::cout<<"\np menunjuk ke alamat d"<<std::endl;
   std::cout<<"Nilai *p\t: "<<*((double*) p)<<std::endl;
   std::cout<<"Nilai p\t\t: "<<p<<std::endl;

   return 0;
}
