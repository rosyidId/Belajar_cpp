/******************************************************
Nama file: parameter_masukan_keluaran.cpp
*******************************************************/

#include <iostream>

// parameter masukan-keluaran yang berupa referensi
void increment(int& a) {
   ++a;
}

// parameter masukan-keluaran yang berupa pointer
void decrement(int *a) {
   --(*a);
}

int main() {
   int x {10};
   
   std::cout<<"Nilai x awal\t\t: "<<x<<std::endl;
   
   // memanggil fungsi increment()
   increment(x);
   std::cout<<"Setelah x dinaikkan\t: "<<x<<std::endl;
   
   // memanggil fungsi decrement()
   decrement(&x);  // mengirim alamat dari variabel x
   std::cout<<"Setelah x diturunkan\t: "<<x<<std::endl;
   
   return 0;
}
