/******************************************************
Nama file: c_fputs.cpp
*******************************************************/

#include <cstdio>	// FILE, printf(), fopen(), fputs(), fclose()
#include <cstring>	// strcpy()
#include <cstdlib>	// exit(), EXIT_FAILURE


int main() {   
   FILE *fp;
   char namaFile[50];
   
   strcpy(namaFile, "/home/budi/cpp17/bab-12/kontak.txt");

   fp = fopen(namaFile, "w");

   if (!fp) {
      printf("ERROR: File tidak dapat terbuat.\n");
      exit(EXIT_FAILURE);
   }

   fputs("Adi – 08191199888\n", fp);
   fputs("Ami - 08191199777\n", fp);
   fputs("Ani - 08191199666\n", fp);
   fputs("Ari - 08191199555\n", fp);
   fputs("Ati - 08191199444\n", fp);

   fclose(fp);

   printf("File \"%s\" telah terbuat...\n", namaFile);
   
   return 0;
}
