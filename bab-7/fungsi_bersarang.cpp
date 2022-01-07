/******************************************************
Nama file: fungsi_bersarang.cpp	(salah)
*******************************************************/

#include <iostream>
#include <cmath>	// sqrt()

double hipotenusa(double a, double b) {
   // salah, pendefinisian fungsi lokal
   // tidak diizinkan dalam C++ 
   double kuadrat(double n) {
      return n * n;
   }
   
   return sqrt(kuadrat(a) + kuadrat(b));
}

int main() {
   double x {3.0}, y {4.0};
   
   // memanggil fungsi hipotenusa()
   std::cout<<"Sisi miring segitiga siku-siku = "
            <<hipotenusa(x, y);
   
   return 0;
}
