/******************************************************
Nama file: return.cpp
*******************************************************/

#include <iostream>

// mendefinisikan fungsi
double kali(double a, double b) {  // BARIS A
   double hasil = a * b;
   return hasil;
}

int main() {   
   double hasilKali {0.0};

   // memanggil fungsi kali()
   hasilKali = kali(8, 9);  // BARIS B
    
   std::cout<<"8 x 9 = "<<hasilKali;
   
   return 0; 
}
