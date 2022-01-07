/******************************************************
Nama file: parameter_argc_argv1.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string, std::stoi()
#include <cstring>	// strlen()

int main(int argc, char *argv[]) {
   int jumlah {0};
   
   // menjumlahkan argumen ke-1 sampai akhir
   for (auto i {1}; i<argc; i++) {
      // mengonversi dari char* ke std::string
      std::string s(argv[i]);
      // mengonversi dari std::string ke int
      int nilai = std::stoi(s);
      jumlah += nilai;
   }
   
   std::cout<<"Jumlah = "<<jumlah;
   
   return 0;
}
