/******************************************************
Nama file: c_scanf1.cpp
*******************************************************/

#include <cstdio>		// printf(), scanf()

int main() {   
   float a, b, c;

   printf("Masukkan bilangan pertama: ");
   scanf("%f", &a);
   printf("Masukkan bilangan kedua: ");
   scanf("%f", &b);

   c = a / b;

   printf("\n%f / %f = %f", a, b, c);
   
   return 0;
}
