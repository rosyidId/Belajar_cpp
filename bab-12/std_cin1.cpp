/******************************************************
Nama file: std_cin1.cpp
*******************************************************/

#include <iostream>	// std::cout, std::cin

int main() {   
   int a, b, c;
   
   std::cout<<"Masukkan nilai a, b, dan c:"<<std::endl;
   std::cin>>a>>b>>c;
   
   std::cout<<"\nNilai a: "<<a<<std::endl;
   std::cout<<"Nilai b: "<<b<<std::endl;
   std::cout<<"Nilai c: "<<c<<std::endl;

   return 0;
}
