/******************************************************
Nama file: kondisional1.cpp
*******************************************************/

#include <iostream>

int main() {
   int a {-11};
   int b {99};
   int maksimum, abs;

   // mencari nilai terbesar
   if (a > b) {
     maksimum = a;
   } else {
     maksimum = b;
   }

   // mencari harga mutlak
   if (a >= 0) {
     abs = a;
   } else {
     abs = -a;
   }

   std::cout<<"maksimum \t: "<<maksimum<<std::endl;
   std::cout<<"abs \t\t: "<<abs<<std::endl;

   return 0;
}
