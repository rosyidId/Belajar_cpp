/******************************************************
Nama file: direktif_if2.cpp
*******************************************************/

#include <iostream>

int main() {
      
   #if __cplusplus == 201103L      
      std::cout<<"Kompilator mendukung C++11"<<std::endl;
   #elif __cplusplus == 201403L
      std::cout<<"Kompilator mendukung C++14"<<std::endl;
   #elif __cplusplus == 201703L
      std::cout<<"Kompilator mendukung C++17"<<std::endl;
   #else      
      std::cout<<"Kompilator mendukung C++98/03"<<std::endl;
   #endif  
   
   return 0;
}

