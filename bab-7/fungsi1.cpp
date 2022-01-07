/******************************************************
Nama file: fungsi1.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string
#include <iomanip>	// std::fixed

// mendefinisikan fungsi yang mengembalikan nilai
// bertipe double
double kali(double a, double b) {
   return a * b;
}

// mendefinisikan fungsi yang mengembalikan nilai
// bertipe string
std::string sambung(std::string s1, std::string s2) {
   return s1 + s2;
}

// mendefinisikan fungsi yang mengembalikan nilai
// bertipe bool
bool ganjil(int x) {
   return (x % 2 != 0);
}

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
