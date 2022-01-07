/******************************************************
Nama file: sizeof1.cpp
*******************************************************/

#include <iostream>

//tipe data bentukan/struct
struct Struktur {
   char c;
   int i;
   float f;
};

class Kelas {
   //properti
   double d;

public:
   //konstruktor
   Kelas() { d = 0.0; }
   //setter
   void setD(double d) { this->d = d; }
   //getter
   double getD() { return d; }
};

int main() {   
   Struktur s;
   Kelas k;   
   
   std::cout<<"sizeof s\t\t: "
            <<sizeof s
            <<" byte"<<std::endl;
   std::cout<<"sizeof k\t\t: "
            <<sizeof k
            <<" byte"<<std::endl;
   std::cout<<"sizeof(Struktur)\t: "
            <<sizeof(Struktur)
            <<" byte"<<std::endl;
   std::cout<<"sizeof(Kelas)\t\t: "
            <<sizeof(Kelas)
            <<" byte"<<std::endl;
   
   return 0; 
}
