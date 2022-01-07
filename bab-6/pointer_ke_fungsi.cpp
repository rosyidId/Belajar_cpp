/******************************************************
Nama file: pointer_ke_fungsi.cpp
*******************************************************/

#include <iostream>
#include <iomanip>	// std::fixed

double perkalian_dua_bilangan_riil(double a, double b) {
   return a * b;
}

int main() {
   // mendeklarasikan dua variabel bertipe double
   double x, y;
   
   // mendeklarasikan pointer ke tipe double
   double (*p)(double, double);

   // p menunjuk ke alamat dari fungsi
   p = &perkalian_dua_bilangan_riil;
   
   std::cout<<"Masukkan nilai x: ";
   std::cin>>x;
   std::cout<<"Masukkan nilai y: ";
   std::cin>>y;

   // memanggil fungsi
   double hasil = p(x, y);
   
   std::cout<<std::fixed;
   std::cout<<x<<" x "<<y<<" = "<<hasil;
   
   return 0;
}
