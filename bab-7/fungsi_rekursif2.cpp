/******************************************************
Nama file: fungsi_rekursif2.cpp
*******************************************************/

#include <iostream>

void cetakBilangan(int n) {   
   if (n == 0) return;	// kondisi berhenti
   std::cout<<n<<" ";	// menampilkan nilai n 
   cetakBilangan(n-1);	// memanggil dirinya sendiri
}

int main() {
   // memanggil fungsi cetakBilangan()
   cetakBilangan(10);
      
   return 0;
}
