/******************************************************
Nama file: file_get.cpp
*******************************************************/

#include <iostream>
#include <fstream>	// std::ifstream

int main() {   
   // mendeklarasikan stream untuk proses input
   std::ifstream input;
   
   // membuat file untuk mengisi data 
   input.open("data1.txt");

   if (!input) {
      std::cout<<"File tidak dapat dibuka"<<std::endl;
      return 1;
   }
    
   char c;
   while (input) { // selama belum EOF (End Of File)
      input.get(c);
      if (input) {
         std::cout<<c;
      }
   }

   // menutup file    
   input.close();

   return 0;
}
