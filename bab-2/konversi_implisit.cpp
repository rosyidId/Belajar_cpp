/******************************************************
Nama file: konversi_implisit.cpp
*******************************************************/

#include <iostream>
#include <iomanip>	// std::fixed

int main() {
   int i {100};
   double d = i;
   
   std::cout<<std::fixed;
   std::cout<<"Nilai i: "<<i<<std::endl;
   std::cout<<"Nilai d: "<<d<<std::endl;

   return 0;
}
