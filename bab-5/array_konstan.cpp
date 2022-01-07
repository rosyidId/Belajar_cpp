/******************************************************
Nama file: array_konstan.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

// mendefinisikan array konstan
const std::string HARI[7] = {
                     "Minggu", "Senin", "Selasa", "Rabu",
                     "Kamis", "Jumat", "Sabtu"
                  };

int main() {

   // mengubah elemen pertama
   //HARI[0] = "Ahad";	// salah, elemen array tidak dapat diubah   
   
   // menampilkan elemen array
   std::cout<<"Nama-nama hari: "<<std::endl;
   for (auto hari: HARI) {
     std::cout<<hari<<std::endl;
   }   

   return 0;
}
