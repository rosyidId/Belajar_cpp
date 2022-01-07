/******************************************************
Nama file: file_write.cpp
*******************************************************/

#include <iostream>
#include <fstream>	// std::ofstream
#include <cstring>	// strlen()

int main() {   
   const char *data[] = {"C","C++","Java","Python","Ruby","PHP"};
   
   // mendeklarasikan stream untuk proses output
   std::ofstream output;
   
   // membuat file untuk mengisi data 
   output.open("data2.txt");

   if (!output) {
      std::cout<<"File gagal terbuat"<<std::endl;
      return 1;
   }
    
   for (int i{0}; i<6; i++) {
      output.write(data[i], strlen(data[i]));
      output.put('\n');		// membuat baris baru
   }

   // menutup file    
   output.close();

   return 0;
}
