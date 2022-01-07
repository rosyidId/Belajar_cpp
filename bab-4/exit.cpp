/******************************************************
Nama file: exit.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string
#include <cstdlib>	// exit() dan EXIT_FAILURE

const std::string BULAN[] = {
                    "Januari", "Februari", "Maret",
                    "April", "Mei", "Juni",
                    "Juli", "Agustus", "September",
                    "Oktober", "November", "Desember"};

int main() {   
   int noBulan;

   std::cout<<"Masukkan nomor bulan (1..12): ";
   std::cin>>noBulan;
   
   if (noBulan < 1 || noBulan > 12) {
      std::cout<<"Program dihentikan. "
               <<"Nilai di luar rentang."
               <<std::endl;
      exit(EXIT_FAILURE);	// sama dengan: return 1;
   }
   
   std::cout<<"Bulan ke-"<<noBulan<<" adalah "
            <<BULAN[noBulan-1];
   
   return 0; 
}
