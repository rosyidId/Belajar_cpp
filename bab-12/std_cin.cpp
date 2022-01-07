/******************************************************
Nama file: std_cin.cpp
*******************************************************/

#include <iostream>	// std::cout, std::cin

int main() {   
   int a, b, c;
   
   std::cout<<"Masukkan nilai a: ";
   std::cin>>a;
   std::cout<<"Masukkan nilai b: ";
   std::cin>>b;
   std::cout<<"Masukkan nilai c: ";
   std::cin>>c;
   
   std::cout<<"\nNilai a: "<<a<<std::endl;
   std::cout<<"Nilai b: "<<b<<std::endl;
   std::cout<<"Nilai c: "<<c<<std::endl;

   return 0;
}
