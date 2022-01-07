/******************************************************
Nama file: c_rename1.cpp
*******************************************************/

#include <cstdio>	// printf(), rename()

int main() {   
   char olddirname[100] = "/home/budi/cpp17/bab-12/newdir";
   char newdirname[100] = "/home/budi/cpp17/bab-12/mydir";

   if (rename(olddirname, newdirname) == 0) {
      printf("Nama direktori berhasil diubah");
   } else {
      printf("Nama direktori gagal diubah");
   }

   return 0;
}
