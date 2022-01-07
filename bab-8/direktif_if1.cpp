/******************************************************
Nama file: direktif_if1.cpp
*******************************************************/

#include <iostream>

int main() {
   
   // memeriksa dukungan terhadap C++11
   #if __cplusplus >= 201103L
      auto a {8};	// tipe auto hanya ada sejak C++11
      std::cout<<"a bertipe auto"<<std::endl;
   #else
      int a = 9;
      std::cout<<"a bertipe int"<<std::endl;
   #endif  
   
   std::cout<<"Nilai a: "<<a<<std::endl;
   
   return 0;
}

