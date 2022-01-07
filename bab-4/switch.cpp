/******************************************************
Nama file: switch.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string
#include <cstdlib>	// exit()

int main() {   
   int noHari;
   std::string namaHari;
   
   std::cout<<"Masukkan nomor hari: ";
   std::cin>>noHari;
   
   switch (noHari) {
      //: semi colon kalau ; sama dengan colon
      case 1: namaHari = "Minggu"; break;
      case 2: namaHari = "Senin";  break;
      case 3: namaHari = "Selasa"; break;
      case 4: namaHari = "Rabu";   break;
      case 5: namaHari = "Kamis";  break;
      case 6: namaHari = "Jumat";  break;
      case 7: namaHari = "Sabtu";  break;
      default: {
         std::cout<<"Tidak ada hari ke-"<<noHari<<std::endl;
         exit(1);
      }
   }
   
   std::cout<<"Nama hari ke-"<<noHari
            <<" adalah "<<namaHari<<std::endl;
   
   return 0; 
}
