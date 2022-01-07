/******************************************************
Nama file: parameter_argc_argv.cpp
*******************************************************/

#include <iostream>

int main(int argc, char *argv[]) {
   
   // menampilkan semua argumen yang dilewatkan
   // pada saat program dieksekusi
   for (auto i {0}; i<argc; i++) {
      std::cout<<"Argumen ke-"<<i<<": "
               <<argv[i]
               <<std::endl;
   }
   
   return 0;
}
