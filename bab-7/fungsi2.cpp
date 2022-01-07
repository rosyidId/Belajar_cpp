/******************************************************
Nama file: fungsi2.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string
#include <iomanip>	// std::fixed

// deklarasi fungsi
double kali(double a, double b);
std::string sambung(std::string s1, std::string s2);
bool ganjil(int x);

int main() {
   double hasil1;
   std::string hasil2;
   bool hasil3;
    
   // memanggil fungsi
   hasil1 = kali(10.0, 2.0);
   hasil2 = sambung("Pemrograman ", "C++");
   hasil3 = ganjil(99);
   
   // menampilkan hasil
   std::cout<<std::fixed;
   std::cout<<"Hasil perkalian: "<<hasil1<<std::endl;
   std::cout<<"Hasil penyambungan: "<<hasil2<<std::endl;
   std::cout<<"99 merupakan bilangan ganjil: "
            <<(hasil3 ? "true" : "false")
            <<std::endl;
   
   return 0;
}

// definisi/implementasi fungsi
double kali(double a, double b) {
   return a * b;
}

std::string sambung(std::string s1, std::string s2) {
   return s1 + s2;
}

bool ganjil(int x) {
   return (x % 2 != 0);
}
