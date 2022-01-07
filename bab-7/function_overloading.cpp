/******************************************************
Nama file: funtion_overloading.cpp
*******************************************************/

#include <iostream>
#include <iomanip>	// std::fixed

// fungsi dengan parameter bertipe int
void cetak(int a) {
   std::cout<<"cetak(int) dipanggil: "<<a<<std::endl;
}

// fungsi dengan parameter bertipe long
void cetak(long a) {
   std::cout<<"cetak(long) dipanggil: "<<a<<std::endl;
}

// fungsi dengan parameter bertipe float
void cetak(float a) {
   std::cout<<"cetak(float) dipanggil: "<<a<<std::endl;
}

// fungsi dengan parameter bertipe double
void cetak(double a) {
   std::cout<<std::fixed;
   std::cout<<"cetak(double) dipanggil: "<<a<<std::endl;
}

// fungsi dengan parameter bertipe std::string
void cetak(std::string s) {
   std::cout<<"cetak(std::string) dipanggil: \""
            <<s<<"\""<<std::endl;
}

int main() {
   
   // memanggil fungsi cetak() dengan parameter berbeda
   cetak(9);
   cetak(9L);
   cetak(4.5F);
   cetak(4.5);
   cetak("Pemrograman C++");
   
   return 0;
}
