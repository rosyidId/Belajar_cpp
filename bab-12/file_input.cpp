/******************************************************
Nama file: file_input.cpp
*******************************************************/

#include <iostream>
#include <fstream>	// std::ifstream

int main() {   
   // mendeklarasikan stream untuk proses input
   std::ifstream input;

   // membuka file yang sudah dibuat sebelumnya 
   input.open("data.txt");

   if (!input) {
      std::cout<<"File tidak dapat dibuka"<<std::endl;
      return 1;
   }
    
   std::string line;
    
   getline(input, line);
   std::cout<<line<<std::endl;
   getline(input, line);
   std::cout<<line<<std::endl;

   // menutup file    
   input.close();

   return 0;
}
