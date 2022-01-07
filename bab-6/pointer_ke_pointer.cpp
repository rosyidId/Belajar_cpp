/******************************************************
Nama file: pointer_ke_pointer.cpp
*******************************************************/

#include <iostream>

int main() {
   int a {10};
   
   int *p1 {&a};	// pointer p1 menunjuk ke alamat dari variabel a
   
   int **p2 {&p1};	// pointer p2 menunjuk ke alamat dari pointer p1
   
   std::cout<<"Nilai a\t\t\t: "<<a<<std::endl;
   std::cout<<"Alamat variabel a\t: "<<&a
            <<std::endl<<std::endl;
   
   std::cout<<"Nilai *p1\t\t: "<<*p1<<std::endl;
   std::cout<<"Nilai p1\t\t: "<<p1<<std::endl;
   std::cout<<"Alamat pointer p1\t: "<<&p1
            <<std::endl<<std::endl;
   
   std::cout<<"Nilai *p2\t\t: "<<*p2<<std::endl;
   std::cout<<"Nilai **p2\t\t: "<<**p2<<std::endl;
   std::cout<<"Nilai p2\t\t: "<<p2<<std::endl;
   std::cout<<"Alamat pointer p2\t: "<<&p2<<std::endl;
   
   return 0;
}
