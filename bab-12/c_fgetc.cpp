/******************************************************
Nama file: c_fgetc.cpp
*******************************************************/

#include <cstdio>	// FILE, printf(), fopen(), fgetc(), fclose()
#include <cstring>	// strcpy()
#include <cstdlib>	// exit(), EXIT_FAILURE

int main() {   
   FILE *fp;
   char namaFile[50];
   char c;
   
   strcpy(namaFile, "/home/budi/cpp17/bab-12/kontak.txt");

   fp = fopen(namaFile, "r");

   if (!fp) {
      printf("ERROR: File tidak ditemukan.\n");
      exit(EXIT_FAILURE);
   }

   printf("Isi file \"%s\":\n", namaFile);
   while ((c = fgetc(fp)) != -1) {
      printf("%c", c);
   }

   fclose(fp);

   return 0;
}
