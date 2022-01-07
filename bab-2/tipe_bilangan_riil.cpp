/******************************************************
Nama file: tipe_bilangan_riil.cpp
*******************************************************/

#include <iostream>

const float PI = 3.14159F;

int main() {
   float r, luas, keliling;
      
   std::cout<<"Masukkan jari-jari lingkaran: ";
   std::cin>>r;
   
   luas = PI * r * r;
   keliling = 2 * PI * r;
   
   std::cout<<"\nLuas lingkaran\t\t= "
            <<luas<<std::endl;
   std::cout<<"Keliling lingkaran\t= "
            <<keliling<<std::endl;   
   
   return 0;
}
