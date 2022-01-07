/******************************************************
Nama file: c_mkdir.cpp
*******************************************************/

#include <cstdio>	// printf()
#include <cstdlib>	// system()
#include <cstring>	// strcat()

bool mkdir(char *dirname) {
   char command[255] = "mkdir ";
   if (!system(strcat(command, dirname))) return true;
   return false;
}

int main() {   
   char dirname[100] = "/home/budi/cpp17/bab-12/newdir";

   if (mkdir(dirname)) {
      printf("Direktori \"%s\" berhasil dibuat", dirname);
   } else {
      printf("Direktori \"%s\" gagal dibuat", dirname);
   }

   return 0;
}
