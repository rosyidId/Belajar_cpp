/******************************************************
Nama file: fungsi_rekursif1.cpp
*******************************************************/

#include <iostream>

void cetakBilangan(int n) {   
   if (n == 0) return;	// kondisi berhenti
   cetakBilangan(n-1);	// memanggil dirinya sendiri
   std::cout<<n<<" ";	// menampilkan nilai n 
}

int main() {
   // memanggil fungsi cetakBilangan()
   cetakBilangan(10);
      
   return 0;
}
