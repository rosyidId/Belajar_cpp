/******************************************************
Nama file: c_printf.cpp
*******************************************************/

#include <cstdio>		// printf()

int main() {   
   int p = 13;

   printf("%%d dan %%i: %d dan %i\n", -45, 54);
   printf("%%u: %u\n", 45);
   printf("%%o: %o\n", 10);
   printf("%%x dan %%X: %x dan %X\n", 15, 15);
   printf("%%f dan %%F: %f dan %F\n", -1.234, 1.234);
   printf("%%e dan %%E: %e dan %E\n", 0.000045, 0.000045);
   printf("%%g dan %%G: %g dan %G\n", 0.000045, 0.000045);
   printf("%%a dan %%A: %a dan %A\n", 33.0, 33.0);
   printf("%%c: %c\n", 'B');
   printf("%%s: %s\n", "Menggunakan printf() dalam C++");
   printf("%%p: %p\n", &p);
   printf("Menampilkan tanda %%\n");
   
   return 0;
}
