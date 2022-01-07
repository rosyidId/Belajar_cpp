/******************************************************
Nama file: for8.cpp
*******************************************************/

#include <iostream>
#include <iomanip>	// std::setw()

const int N = 10;

int main() {   
   std::cout<<std::setw(4)<<" * ";
   for (auto i {1}; i<=N; i++) {
      std::cout<<std::setw(3);
      std::cout<<i<<" ";
   }
   std::cout<<std::endl;
   
   for (auto i {1}; i<=N; i++) {
      std::cout<<std::setw(3);
      std::cout<<i<<" ";
      for (auto j {1}; j<=N; j++) {
         std::cout<<std::setw(3);
         std::cout<<i*j<<" ";
      }
      std::cout<<std::endl;
   }
   
   return 0; 
}
