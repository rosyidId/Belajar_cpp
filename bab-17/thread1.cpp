/******************************************************
Nama file: thread1.cpp
*******************************************************/

#include <iostream>
#include <pthread.h>
#include <unistd.h>	// usleep()

// fungsi untuk mencetak bilangan ganjil
void *cetakGanjil(void *idThread) {
   char *id = (char *) idThread;
   std::cout<<"Thread "<<id
            <<" mulai dijalankan..."<<std::endl;
   for (int i=1; i<=10; i++) {     
      if (i > 5) {
         std::cout<<"============================>>"
                  <<"THREAD PERTAMA SELESAI"<<std::endl;
         // memaksa thread untuk berhenti
         pthread_exit(NULL);	
      }
      std::cout<<"Thread pertama detik ke-"<<i<<std::endl;
      if (i % 2 == 1) {
         std::cout<<"...mencetak bilangan ganjil "<<i<<std::endl;
      }
      usleep(1000000); // memberi jeda 1 detik
   }
}

// fungsi untuk mencetak bilangan genap
void *cetakGenap(void *idThread) {
   char *id = (char *) idThread;
   std::cout<<"Thread "<<id
            <<" mulai dijalankan... "<<std::endl;
   for (int i=1; i<=10; i++) {
      std::cout<<"Thread kedua detik ke-"<<i<<std::endl;
      if (i % 2 != 1) {
         std::cout<<"...mencetak bilangan genap "<<i<<std::endl;
      }
      usleep(1000000);
   }
   std::cout<<"============================>>"
            <<"THREAD KEDUA SELESAI"<<std::endl;
   pthread_exit(NULL);
}

int main() {   
   // Mendeklarasikan thread
   pthread_t thread1, thread2;
   int n1, n2;

   // membuat dan menjalankan thread pertama
   n1 = pthread_create(&thread1, NULL, 
                       cetakGanjil, (void*) "pertama");

   if (n1) {
      std::cout<<"Thread pertama gagal dibuat."<<std::endl;
   }

   // Membuat dan menjalankan thread kedua
   n2 = pthread_create(&thread2, NULL,
                       cetakGenap, (void*) "kedua");

   if (n2) {
      std::cout<<"Thread kedua gagal dibuat."<<std::endl;
   }

   pthread_exit(NULL);

   return 0;
}
