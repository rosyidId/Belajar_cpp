/******************************************************
Nama file: parameter_keluaran1.cpp
*******************************************************/

#include <iostream>
#include <iomanip>	// std::fixed

// parameter keluaran yang berupa pointer
void bagi(double a, double b, double *c) {
   *c = a / b;
}

int main() {
   double x {10.0}, y {3.0}, z;
   
   // parameter ketiga berupa alamat dari variabel z
   bagi(x, y, &z);
   
   std::cout<<std::fixed;
   std::cout<<x<<" / "<<y<<" = "<<z<<std::endl;
   
   return 0;
}
