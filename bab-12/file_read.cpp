/******************************************************
Nama file: file_read.cpp
*******************************************************/

#include <iostream>
#include <fstream>	// std::ifstream

int main() {   
   // mendeklarasikan stream untuk proses input
   std::ifstream input;
   
   // membuat file untuk mengisi data 
   input.open("data2.txt");

   if (!input) {
      std::cout<<"File tidak dapat dibuka"<<std::endl;
      return 1;
   }
    
   // membaca 27 byte
   char data[27];
   input.read((char *) data, 27);
   
   std::cout<<data;
   
   // menutup file    
   input.close();

   return 0;
}
