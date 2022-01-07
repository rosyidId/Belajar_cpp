/******************************************************
Nama file: switch1.cpp (SALAH)
*******************************************************/

#include <iostream>
#include <cstdlib>	// exit()

int main() {   
   int noHari;
   
   std::cout<<"Masukkan nomor hari: ";
   std::cin>>noHari;
   
   switch (noHari) {
      case 1: std::cout<<"Minggu"<<std::endl;
      case 2: std::cout<<"Senin"<<std::endl;
      case 3: std::cout<<"Selasa"<<std::endl;
      case 4: std::cout<<"Rabu"<<std::endl;
      case 5: std::cout<<"Kamis"<<std::endl;
      case 6: std::cout<<"Jumat"<<std::endl;
      case 7: std::cout<<"Sabtu"<<std::endl;
      default: std::cout<<"Tidak ada hari ke-"<<noHari<<std::endl;
   }
   
   return 0; 
}
