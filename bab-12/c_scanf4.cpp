/******************************************************
Nama file: c_scanf4.cpp
*******************************************************/

#include <cstdio>		// printf(), scanf()

int main() {   
   char nama[25];

   printf("Masukkan nama lengkap Anda: ");
   scanf("%s", nama);

   printf("Hai %s, apa kabar?", nama);
   
   return 0;
}
