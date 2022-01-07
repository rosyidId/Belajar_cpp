/******************************************************
Nama file: parameter.cpp
*******************************************************/

#include <iostream>
#include <cmath>	// sqrt()
#include <iomanip>	// std::fixed

int main() {
   double a, b;
   
   // memanggil fungsi sqrt()
   // untuk menghitung nilai akar kuadrat
   // dari suatu bilangan
   a = sqrt(4.0);
   b = sqrt(25.0);
   
   // menampilkan hasil
   std::cout<<std::fixed;
   std::cout<<"a: "<<a<<std::endl;
   std::cout<<"b: "<<b<<std::endl;
   
   return 0;
}
