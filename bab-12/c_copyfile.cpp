/******************************************************
Nama file: c_copyfile.cpp
*******************************************************/

#include <cstdio>	// FILE, printf(), fopen(), 
					// fputc(), fgetc(), fclose()

void copyFile(char *source, char *destination) {
   FILE *fsource, *fdest;
   char c;

   fsource = fopen(source, "r");
   fdest = fopen(destination, "w");

   while ((c = fgetc(fsource)) != -1) {
      fputc(c, fdest);
   }

   fclose(fsource);
   fclose(fdest);
}

int main() {   
   char filename1[100] = "/home/budi/cpp17/bab-12/kontak.txt";
   char filename2[100] = "/home/budi/cpp17/bab-12/kontak1.txt";

   copyFile(filename1, filename2);

   printf("Penyalinan file berhasil...\n");
   printf("File \"%s\" telah disalin ke \"%s\"\n", 
          filename1, filename2);

   return 0;
}
