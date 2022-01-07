/******************************************************
Nama file: file_put.cpp
*******************************************************/

#include <iostream>
#include <fstream>	// std::ofstream

int main() {   
   // mendeklarasikan stream untuk proses output
   std::ofstream output;
   
   // membuat file untuk mengisi data 
   output.open("data1.txt");

   if (!output) {
      std::cout<<"File gagal terbuat"<<std::endl;
      return 1;
   }
    
   int c=65;
   while  ((char) c <= 'Z') {
     output.put((char) c);
     c++;
   }

   // menutup file    
   output.close();

   return 0;
}
