/******************************************************
Nama file: inisialisasi_array2.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string
#include <iomanip>	// std::setw()

std::string BULAN[] {
               "Januari", "Februari", "Maret", "April",
               "Mei", "Juni", "Juli", "Agustus",
               "September", "Oktober", "November", "Desember"
            };

int main() {

   // menampilkan elemen array
   std::cout<<"Nama-nama bulan: "<<std::endl;
   for (auto i {0}; i<12; i++) {
      std::cout<<std::setw(2)<<i+1;
      std::cout<<". "<<BULAN[i]<<std::endl;
   }   

   return 0;
}
