/******************************************************
Nama file: variable_arguments_list.cpp
*******************************************************/

#include <iostream>
#include <cstdarg>	// va_list, va_start(), va_arg(), dan va_end()

int maksimum(int n, ...) {
   int nilai, maks;
   va_list vl;	// variabel bertipe va_list
   
   va_start(vl, n);	// inisialisasi parameter sejumlah n
   
   // mengambil argumen pertama
   maks = va_arg(vl, int);
   for (auto i {1}; i<n; i++) {
      nilai = va_arg(vl, int);
      maks = (nilai > maks) ? nilai : maks;
   }
   va_end(vl);	// mengakhiri penggunaan variable-arguments list
   return maks;
}

int main() {
   // memanggil fungsi dengan tiga parameter dinamis
   std::cout<<"Nilai maksimum 1: "
            <<maksimum(3, 100,500,300)
            <<std::endl;
   
   // memanggil fungsi dengan lima parameter dinamis
   std::cout<<"Nilai maksimum 2: "
            <<maksimum(5, 700,100,500,300,200)
            <<std::endl;
   
   // memanggil fungsi dengan tujuh parameter dinamis
   std::cout<<"Nilai maksimum 3: "
            <<maksimum(7, 700,800,100,900,500,300,200)
            <<std::endl;
   
   return 0;
}
