/******************************************************
Nama file: fungsi_gaya_baru.cpp
*******************************************************/

#include <iostream>
#include <iomanip>	// std::fixed

auto tambah(double a, double b) -> double {
   return a + b;
}

auto kurang(double a, double b) -> double {
   return a - b;
}

auto kali(double a, double b) -> double {
   return a * b;
}

auto bagi(double a, double b) -> double {
   return a / b;
}

int main() {
   double x {10.0}, y {3.0};
   
   // memanggil fungsi
   std::cout<<std::fixed;
   std::cout<<x<<" + "<<y<<" = "<<tambah(x,y)<<std::endl;
   std::cout<<x<<" - "<<y<<" = "<<kurang(x,y)<<std::endl;
   std::cout<<x<<" x "<<y<<" = "<<kali(x,y)<<std::endl;
   std::cout<<x<<" / "<<y<<" = "<<bagi(x,y)<<std::endl;
   
   return 0;
}
