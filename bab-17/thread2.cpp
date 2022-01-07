/******************************************************
Nama file: thread2.cpp
*******************************************************/

#include <iostream>
#include <pthread.h>
#include <unistd.h>		// usleep()
#include <cstring>
#include <cstdlib>

const int MAX_THREAD = 5;

void *cetakPesan(void *param) {
   char arg[50];
   strcpy(arg,(char *) param);

   std::cout<<"Nilai parameter: "<<arg<<std::endl;

   pthread_exit(NULL);
}

int main() {   
   pthread_t thread[MAX_THREAD];

   // Argumen yang akan dilewatkan
   char arg[MAX_THREAD][50] = {"SATU","DUA",
                              "TIGA","EMPAT",
                              "LIMA"};

   int n;

   for (int i=0; i<MAX_THREAD; i++) {
      std::cout<<"Membuat thread ke-"<<i<<std::endl;
      n = pthread_create(&thread[i], NULL, 
                       cetakPesan, (void*) arg[i]);
     
      if (n) {
         std::cout<<"Thread ke-"<<i<<" gagal dibuat"<<std::endl;
         exit(EXIT_FAILURE);
      }
      usleep(1000000);
   }

   return 0;
}
