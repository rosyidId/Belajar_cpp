/******************************************************
Nama file: strerror.cpp
*******************************************************/

#include <iostream>
#include <cstring>	// strerror()
#include <cerrno>	// errno
#include <cstdlib>	// exit(), EXIT_FAILURE
#include <cstdio>	// FILE, fopen(), fclose(), getc(), EOF

int main() {
   FILE *fp;
  
   // membuka file untuk dibaca
   fp = fopen("data.txt", "r");
  
   if (!fp) {
      std::cout<<"Kode error: "<<errno<<std::endl;
      std::cout<<"Pesan error: "<<strerror(errno);
      exit(EXIT_FAILURE);
   }
  
   // membaca isi file
   char c;
   while ((c = getc(fp)) != EOF) {
  	  std::cout<<c;
   }
  
   // menutup file
   fclose(fp);
      
   return 0;
}
