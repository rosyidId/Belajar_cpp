/******************************************************
Nama file: file_output.cpp
*******************************************************/

#include <iostream>
#include <fstream>	// std::ofstream

int main() {   
   // mendeklarasikan stream 
   // untuk proses output
   std::ofstream output;

   output.open("data.txt");

   // melakukan pencegahan 
   // terhadap terjadinya kesalahan
   if (!output) {
      std::cout<<"File tidak dapat dibuka"<<std::endl;
      return 1;
   }

   // menulis teks ke dalam file
   output<<"Menjadi Master C++"<<std::endl;
   output<<"Penerbit INFORMATIKA Bandung"<<std::endl;

   // menutup file
   output.close();

   return 0;
}
