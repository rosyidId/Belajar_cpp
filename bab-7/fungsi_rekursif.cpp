/******************************************************
Nama file: fungsi_rekursif.cpp
*******************************************************/

#include <iostream>
#include <cstdlib>	// exit(), EXIT_FAILURE

int faktorial(int n) {
   if (n < 0) {
	   std::cout<<"SALAH: nilai tidak boleh negatif"<<std::endl;
	   exit(EXIT_FAILURE);
   }
   if (n <= 1) return 1;
   return n * faktorial(n-1); 
}

int main() {
   int a, f;
   
   std::cout<<"Masukkan nilai a: ";
   std::cin>>a;
   
   f = faktorial(a);
   
   std::cout<<a<<"! = "<<f;
      
   return 0;
}
