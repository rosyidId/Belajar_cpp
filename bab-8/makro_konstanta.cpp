/******************************************************
Nama file: makro_konstanta.cpp
*******************************************************/

#include <iostream>
#include <iomanip>	// std::fixed

#define PI 3.14159

int main() {
   double r, luas, keliling;
   
   std::cout<<"Masukkan jari-jari lingkaran: ";
   std::cin>>r;

   // menghitung luas dan keliling lingkaran
   luas = PI * r * r;
   keliling = 2 * PI * r;
   
   std::cout<<std::fixed;
   std::cout<<"Luas lingkaran\t\t= "<<luas<<std::endl;
   std::cout<<"Keliling lingkaran\t= "<<keliling<<std::endl;
   
   return 0;
}

