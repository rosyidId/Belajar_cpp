/******************************************************
Nama file: baca_cstring1.cpp
*******************************************************/

#include <cstdio>

int main() {
   char nama[30];
   
   printf("Masukkan nama lengkap: ");
   scanf("%s", nama);
   
   printf("Hai %s, apa kabar?\n", nama);
      
   return 0;
}
