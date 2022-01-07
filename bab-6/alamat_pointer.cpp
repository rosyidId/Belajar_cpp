/******************************************************
Nama file: alamat_pointer.cpp
*******************************************************/
//pointer tidak bisa menampung nilai tapi hanya menyimpan alamat memori

#include <iostream>

int main() {
   int a {10};
   //astrik
   //ampersen
   
   int *aku {&a};	// pointer p menunjuk ke alamat dari variabel a
   
   // std::cout<<"Nilai a\t\t\t:"<<a<<std::endl;
   std::cout<<"Alamat variabel a\t:"<< &a <<std::endl;
   // std::cout<<"Nilai *p\t\t:"<<*aku<<std::endl;
   // std::cout<<"Nilai p\t\t\t:"<<aku<<std::endl;
   // std::cout<<"Alamat pointer p\t:"<< &aku <<std::endl;
   
   return 0;
}
