/******************************************************
Nama file: c_scanf.cpp
*******************************************************/

#include <cstdio>		// printf(), scanf()

int main() {   
   int a, b, c;

   printf("Masukkan bilangan pertama: ");
   scanf("%d", &a);
   printf("Masukkan bilangan kedua: ");
   scanf("%d", &b);

   c = a * b;

   printf("\n%d x %d = %d", a, b, c);   
   
   return 0;
}
