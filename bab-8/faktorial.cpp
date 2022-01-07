/******************************************************
Nama file: faktorial.cpp
*******************************************************/

#include <iostream>	// std::cout
#include <cstdlib>	// exit() dan EXIT_FAILURE

// mendefinisikan fungsi faktorial()
int faktorial(int n) {
   if (n < 0) {
	   std::cout<<"SALAH: Nilai tidak boleh negatif";
	   exit(EXIT_FAILURE);
   }
   if (n <=1) return 1;
   return n * faktorial(n-1);
}

