/******************************************************
Nama file: parameter_keluaran.cpp
*******************************************************/

#include <iostream>
#include <iomanip>	// std::fixed

// parameter keluaran yang berupa referensi
void bagi(double a, double b, double& c) {
   c = a / b;
}

int main() {
   double x {10.0}, y {3.0}, z;
   
   // memanggil fungsi bagi()
   bagi(x, y, z);
   
   // menampilkan hasil fungsi
   std::cout<<std::fixed;
   std::cout<<x<<" / "<<y<<" = "<<z<<std::endl;
   
   return 0;
}
