/******************************************************
Nama file: pewarisan_protected.cpp
*******************************************************/

#include <iostream>

class Induk {
private:
   int a {7};
protected:
   int b {8};
public:
   int c {9};
};

// kelas turunan dari kelas Induk
class Anak: protected Induk {
public:
   void anak_cetakA() {
      //std::cout<<a<<std::endl;	// a tidak dapat diakses dari Anak
   }
   
   void anak_cetakB() {
      std::cout<<b<<std::endl;		// b dapat diakses dari Anak
   }
   
   void anak_cetakC() {
      std::cout<<c<<std::endl;		// c dapat diakses dari Anak
   }   
};

// kelas turunan dari kelas Anak
class Cucu: public Anak {
public:
   void cucu_cetakA() {
      //std::cout<<a<<std::endl;	// a tidak dapat diakses dari Cucu
   }
   
   void cucu_cetakB() {
      std::cout<<b<<std::endl;		// b dapat diakses dari Cucu
   }
   
   void cucu_cetakC() {
      std::cout<<c<<std::endl;		// c dapat diakses dari Cucu
   }
};

int main() {
   // membuat objek dari kelas Anak
   Anak obj;
   
   //std::cout<<obj.a<<std::endl;	// a tidak dapat diakses dari main()
   //std::cout<<obj.b<<std::endl;	// b tidak dapat diakses dari main()
   //std::cout<<obj.c<<std::endl;	// c tidak dapat diakses dari main()
   
   return 0;
}
