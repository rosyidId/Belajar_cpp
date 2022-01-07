/******************************************************
Nama file: nilai_bilangan_riil1.cpp
*******************************************************/

#include <cstdio>

int main() {
   double d1 {9.9E18};
   double d2 {9.9E-18};
   
   printf("Nilai d1: %.1lf\n", d1);
   printf("Nilai d2: %.19lf\n", d2);

   return 0;
}
