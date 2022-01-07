/******************************************************
Nama file: non_copy_constructor.cpp
*******************************************************/

#include <iostream>

class Contoh {
private:
   int a;	// atribut non-pointer
   int *b;	// atribut pointer
public:   
   Contoh() = default;
   Contoh(int nilai1, int nilai2) {
      a = nilai1;
      
      b = new int;	// alokasi memori
      *b = nilai2;
   }   
      
   void infoA() {
      std::cout<<"Nilai a\t\t\t\t: "<<a<<std::endl;
      std::cout<<"Alamat a\t\t\t: "<<&a<<std::endl;
   }
   
   void infoB() {
      std::cout<<"Nilai *b\t\t\t: "<<*b<<std::endl;
      std::cout<<"Alamat yang ditunjuk oleh b\t: "<<b<<std::endl;
   }   
   
};

int main() {   
   // membuat objek pertama
   Contoh obj1(10,20);
   
   // membuat objek kedua yang nilai atributnya 
   // diambil dari objek pertama
   Contoh obj2 = obj1;
   
   std::cout<<"Pada objek pertama"<<std::endl;
   obj1.infoA();
   obj1.infoB();
   
   std::cout<<"\nPada objek kedua"<<std::endl;
   obj2.infoA();
   obj2.infoB();      

   return 0;
}
