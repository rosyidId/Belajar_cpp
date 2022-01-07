/******************************************************
Nama file: kondisional.cpp
*******************************************************/

#include <iostream>

int main() {
   int a {-11};
   int b {99};
   int maksimum, abs;

   // if(a > b)
   // {
   //    std::cout << a << std::endl;
   // }
   // else 
   // {
   //    std::cout << b << std::endl;
   // }

   // mencari nilai terbesar
   maksimum = (a > b) ? a : b;

   // mencari harga mutlak
   abs = (a >= 0) ? a : -a;

   std::cout<<"maksimum \t: "<<maksimum<<std::endl;
   std::cout<<"abs \t\t: "<<abs<<std::endl;

   return 0;
}
