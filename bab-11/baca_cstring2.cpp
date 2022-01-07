/******************************************************
Nama file: baca_cstring2.cpp
*******************************************************/

#include <cstdio>

int main() {
   char nama[30];
   
   printf("Masukkan nama lengkap: ");
   scanf("%[^\n]", nama);
   
   printf("Hai %s, apa kabar?\n", nama);
      
   return 0;
}
