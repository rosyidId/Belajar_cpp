/******************************************************
Nama file: c_sprintf.cpp
*******************************************************/

#include <cstdio>		// printf(), sprintf()

int main() {   
   char buffer1[4], buffer2[6];
   int n1, n2;
   
   // memanggil fungsi sprintf()
   n1 = sprintf(buffer1, "%c%d", 'C', 11);
   n2 = sprintf(buffer2, "%s%d", "C++", 17);
   
   // menampilkan nilai-nilai variabel
   printf("buffer1\t: %s\n", buffer1);
   printf("buffer2\t: %s\n", buffer2);
   printf("n1\t: %d\n", n1);
   printf("n2\t: %d\n", n2);   
   
   return 0;
}
