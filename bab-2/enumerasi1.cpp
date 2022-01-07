/******************************************************
Nama file: enumerasi1.cpp
*******************************************************/

#include <iostream>

enum NamaHari {Minggu=nama, Senin, Selasa, Rabu, Kamis, Jumat, Sabtu};

int main() {
   std::cout<<"Minggu\t: "
            <<Minggu<<std::endl;
   std::cout<<"Senin\t: "
            <<Senin<<std::endl;
   std::cout<<"Selasa\t: "
            <<Selasa<<std::endl;
   std::cout<<"Rabu\t: "
            <<Rabu<<std::endl;
   std::cout<<"Kamis\t: "
            <<Kamis<<std::endl;
   std::cout<<"Jumat\t: "
            <<Jumat<<std::endl;
   std::cout<<"Sabtu\t: "
            <<Sabtu<<std::endl;  

   return 0;
}
