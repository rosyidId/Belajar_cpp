/******************************************************
Nama file: fungsi_statis1.cpp
*******************************************************/

#include <iostream>
#include <iomanip>	// std::fixed

class Aritmetika {
public:   
   static double tambah(double a, double b) {
      return a + b;
   }

   static double kurang(double a, double b) {
      return a - b;
   }

   static double kali(double a, double b) {
      return a * b;
   }

   static double bagi(double a, double b) {
      return a / b;
   }
};

int main() {   
   double x {10.0}, y {3.0};
   
   // memanggil fungsi tanpa membuat objek
   std::cout<<std::fixed;
   std::cout<<x<<" + "<<y<<" = "
            <<Aritmetika::tambah(x, y)
            <<std::endl;
   std::cout<<std::fixed;
   std::cout<<x<<" - "<<y<<" = "
            <<Aritmetika::kurang(x, y)
            <<std::endl;
   std::cout<<std::fixed;
   std::cout<<x<<" x "<<y<<" = "
            <<Aritmetika::kali(x, y)
            <<std::endl;
   std::cout<<std::fixed;
   std::cout<<x<<" / "<<y<<" = "
            <<Aritmetika::bagi(x, y)
            <<std::endl;
   
   return 0;
}
