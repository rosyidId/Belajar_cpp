/******************************************************
Nama file: konversi_eksplisit.cpp
*******************************************************/

#include <iostream>

int main() {
   char c {'A'};
   int i {90};
   
   // menampilkan karakter sebagai bilangan bulat
   std::cout<<"Nilai c: "<<(int) c<<std::endl;
   
   // menampilkan bilangan bulat sebagai karakter
   std::cout<<"Nilai i: "<<(char) i<<std::endl;   

   return 0;
}
