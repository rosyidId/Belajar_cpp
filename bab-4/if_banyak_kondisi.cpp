/******************************************************
Nama file: if_banyak_kondisi.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string
#include <cstdlib>	// exit()

int main() {   
   int noHari;
   std::string namaHari;
   
   std::cout<<"Masukkan nomor hari: ";
   std::cin>>noHari;
   
   if (noHari == 1) {
      namaHari = "Minggu";
   } else if (noHari == 2) {
      namaHari = "Senin";
   } else if (noHari == 3) {
      namaHari = "Selasa";
   } else if (noHari == 4) {
      namaHari = "Rabu";
   } else if (noHari == 5) {
      namaHari = "Kamis";
   } else if (noHari == 6) {
      namaHari = "Jumat";
   } else if (noHari == 7) {
      namaHari = "Sabtu";
   } else {
      std::cout<<"Tidak ada hari ke-"<<noHari<<std::endl;
      exit(1);
   }
   
   std::cout<<"Nama hari ke-"<<noHari
            <<" adalah "<<namaHari<<std::endl;
   
   return 0; 
}
