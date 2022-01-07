/******************************************************
Nama file: sizeof.cpp
*******************************************************/

#include <iostream>

int main() {   
   char c;
   int i;
   
   std::cout<<"sizeof c\t: "
            <<sizeof c
            <<" byte"<<std::endl;
   std::cout<<"sizeof(i)\t: "
            <<sizeof(i)
            <<" byte"<<std::endl;
   std::cout<<"sizeof(float)\t: "
            <<sizeof(float)
            <<" byte"<<std::endl;
   std::cout<<"sizeof(double)\t: "
            <<sizeof(double)
            <<" byte"<<std::endl;
   
   return 0; 
}
