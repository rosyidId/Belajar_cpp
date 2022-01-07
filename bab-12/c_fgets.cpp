/******************************************************
Nama file: c_fgets.cpp
*******************************************************/

#include <cstdio>	// FILE, printf(), fopen(), fgets(), fclose()
#include <cstring>	// strcpy()
#include <cstdlib>	// exit(), EXIT_FAILURE

int main() {   
   FILE *fp;
   char namaFile[50];
   char baris[255];
   
   strcpy(namaFile, "/home/budi/cpp17/bab-12/kontak.txt");

   fp = fopen(namaFile, "r");

   if (!fp) {
      printf("ERROR: File tidak ditemukan.\n");
      exit(EXIT_FAILURE);
   }

   printf("Isi file \"%s\":\n", namaFile);
   while (fgets(baris, 255, fp)) {
      printf("%s", baris);
   }

   fclose(fp);

   return 0;
}
