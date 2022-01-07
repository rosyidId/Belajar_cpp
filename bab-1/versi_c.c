/******************************************************
Nama file: ilove.c
*******************************************************/

#include <stdio.h>
// #include <conio.h>

//  fungsi utama, yang mengembalikan nilai 0
int main(void) 
{

  int angka;

  /* menampilkan teks untuk informasi */
  printf("Masukkan bilangan bulat: "); 

  /* 
  | membaca nilai dari keyboard 
  | dan menyimpannya ke dalam variabel nilai
  */
  scanf("%d", &angka);

  /* menampilkan nilai yang telah dimasukkan */
  printf("Bilangan yang dimasukkan adalah %d \n", angka);

  return 0;
}
