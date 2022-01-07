/******************************************************
Nama file: makro.cpp
*******************************************************/

#include <iostream>

#define PI 3.14159

int main() {   
   double r, luas, keliling;
   
   std::cout<<"LINGKARAN"<<std::endl;
   std::cout<<"Masukkan jari-jari: ";
   std::cin>>r;
   
   // menghitung luas dan keliling
   luas = PI * r * r;
   keliling = 2 * PI * r;
   
   std::cout<<"Luas \t\t= "<<luas<<std::endl;
   std::cout<<"Keliling \t= "<<keliling<<std::endl;
   
   return 0;
}
