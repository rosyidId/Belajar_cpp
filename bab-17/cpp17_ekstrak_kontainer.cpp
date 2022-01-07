/******************************************************
Nama file: cpp17_ekstrak_kontainer.cpp
*******************************************************/

#include <iostream>

int main() {
   int arr[3] = {10,20,30};
   auto [a,b,c] = arr;
   
   std::cout<<"Elemen-elemen array: ";
   for (auto e: arr) {
      std::cout<<e<<" ";
   }
   
   std::cout<<"\n\nHasil ekstraksi"<<std::endl;
   std::cout<<"Nilai a: "<<a<<std::endl;
   std::cout<<"Nilai b: "<<b<<std::endl;
   std::cout<<"Nilai c: "<<c<<std::endl;

   return 0;
}
