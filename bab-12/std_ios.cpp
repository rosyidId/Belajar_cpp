/******************************************************
Nama file: std_ios.cpp
*******************************************************/

#include <iostream>	// std::cout, std::ios

int main() {   
   // mengaktifkan flag uppercase
   std::cout.setf(std::ios::uppercase);

   std::cout<<"Menjadi Master C++"<<std::endl;

   // mengaktifkan flag showpos
   std::cout.setf(std::ios::showpos);

   std::cout<<17;

   return 0;
}
