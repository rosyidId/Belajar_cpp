/******************************************************
Nama file: c_rename.cpp
*******************************************************/

#include <cstdio>	// printf(), rename()

int main() {   
   char filename1[100] = "/home/budi/cpp17/bab-12/kontak1.txt";
   char filename2[100] = "/home/budi/cpp17/bab-12/phonebook.txt";

   if (rename(filename1, filename2) == 0) {
      printf("Perubahan nama file berhasil...\n");
      printf("File \"%s\" \ntelah diubah menjadi \"%s\"\n", 
             filename1, filename2);
   } else {
      printf("Perubahan nama file gagal...\n");
   }

   return 0;
}
