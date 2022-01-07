/******************************************************
Nama file: thread.cpp
*******************************************************/

#include <iostream>
#include <pthread.h>

// fungsi untuk mencetak bilangan ganjil
void *cetakGanjil(void *idThread) {
   char *id = (char *) idThread;
   std::cout<<"Thread "<<id
            <<" mulai dijalankan..."<<std::endl;
   for (int i=1; i<=10; i++) {
      if (i % 2 == 1) {
         std::cout<<"Thread pertama: "<<i<<std::endl;
      }
   }
   pthread_exit(NULL);
}

// fungsi untuk mencetak bilangan genap
void *cetakGenap(void *idThread) {
   char *id = (char *) idThread;
   std::cout<<"Thread "<<id
            <<" mulai dijalankan... "<<std::endl;
   for (int i=1; i<=10; i++) {
      if (i % 2 != 1) {
         std::cout<<"Thread kedua: "<<i<<std::endl;
      }
   }
   pthread_exit(NULL);
}

int main() {   
   // mendeklarasikan thread
   pthread_t thread1, thread2;
   int n1, n2;

   // membuat dan menjalankan thread pertama
   n1 = pthread_create(&thread1, NULL, 
                       cetakGanjil, (void*) "pertama");

   if (n1) {
      std::cout<<"Thread pertama gagal dibuat."<<std::endl;
   }

   // membuat dan menjalankan thread kedua
   n2 = pthread_create(&thread2, NULL,
                       cetakGenap, (void*) "kedua");

   if (n2) {
      std::cout<<"Thread kedua gagal dibuat."<<std::endl;
   }

   pthread_exit(NULL);

   return 0;
}
