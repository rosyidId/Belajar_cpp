/******************************************************
Nama file: baca_cstring.cpp
*******************************************************/

#include <cstdio>
#include <cstring>	// strcpy() dan strcat()

int main() {
   char namaDepan[10], namaBelakang[20], nama[30];
   
   printf("Masukkan nama depan: ");
   scanf("%s", namaDepan);
   printf("Masukkan nama belakang: ");
   scanf("%s", namaBelakang);
   
   strcpy(nama, namaDepan);
   strcat(nama, " ");	// menambahkan spasi
   strcat(nama, namaBelakang);
   
   printf("\nNama lengkap Anda adalah %s\n", nama);
      
   return 0;
}
