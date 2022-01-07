/******************************************************
Nama file: aritmetika.cpp
*******************************************************/

#include <iostream>
#include <iomanip>

int main() {
   std::cout<<"10 + 3 \t= "<<(10 + 3)<<std::endl;
   std::cout<<"10 - 3 \t= "<<(10 - 3)<<std::endl;
   std::cout<<"10 * 3 \t= "<<(10 * 3)<<std::endl;
   std::cout<<std::endl;
   
   std::cout<<"10 / 3 \t\t= "<<(10 / 3)<<std::endl;
   std::cout<<"10.0 / 3 \t= "<<(10.0 / 3)<<std::endl;
   std::cout<<"10 / 3.0 \t= "<<(10 / 3.0)<<std::endl;
   std::cout<<"10.0 / 3.0 \t= "<<(10.0 / 3.0)<<std::endl;
   std::cout<<std::endl;
   
   std::cout<<"10 % 3 \t= "<<(10 % 3)<<std::endl;
   
   // salah, operator % tidak dapat diterapkan untuk bilangan riil
   //std::cout<<"10.0 % 3 \t= "
   //         <<(10.0 % 3)<<std::endl;
   //std::cout<<"10 % 3.0 \t= "
   //         <<(10 % 3.0)<<std::endl;
   //std::cout<<"10.0 % 3.0 \t= "
   //         <<(10.0 % 3.0)<<std::endl;   

   return 0;
}
