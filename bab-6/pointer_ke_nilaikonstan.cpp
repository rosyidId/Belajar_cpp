/******************************************************
Nama file: pointer_ke_nilaikonstan.cpp
*******************************************************/

#include <iostream>

int main() {
   const int *p;	// pointer p akan menunjuk ke alamat
					// yang nilainya konstan
   
   int a {10}, b {11};    
   
   p = &a;	// p menunjuk ke alamat dari variabel a
   
   std::cout<<"p menunjuk alamat a"<<std::endl;
   std::cout<<"Nilai *p\t: "<<*p<<std::endl;
   std::cout<<"Nilai p\t\t: "<<p<<std::endl;
   
   // *p = 100;	// salah, nilai a tidak dapat diubah melalui p
   
   a = 100;	// benar, nilai a masih dapat diubah melalui a
   
   std::cout<<"\np menunjuk alamat a (setelah a diubah)"
            <<std::endl;
   std::cout<<"Nilai *p\t: "<<*p<<std::endl;
   std::cout<<"Nilai p\t\t: "<<p<<std::endl;
   
   p = &b;	// benar, karena p tidak bersifat konstan
   std::cout<<"\np menunjuk alamat b"<<std::endl;
   std::cout<<"Nilai *p\t: "<<*p<<std::endl;
   std::cout<<"Nilai p\t\t: "<<p<<std::endl;

   return 0;
}
