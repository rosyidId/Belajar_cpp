/******************************************************
Nama file: c_scanf2.cpp
*******************************************************/

#include <cstdio>		// printf(), scanf()

int main() {   
   float a, b, c;

   printf("Masukkan bilangan pertama: ");
   scanf("%e", &a);
   printf("Masukkan bilangan kedua: ");
   scanf("%e", &b);

   c = a / b;

   printf("\n%e / %e = %e", a, b, c);
   
   return 0;
}
