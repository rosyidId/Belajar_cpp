/******************************************************
Nama file: copy_constructor1.cpp
*******************************************************/

#include <iostream>

class Contoh {
public:   
   int a;	// atribut non-pointer
   int *b;	// atribut pointer

   Contoh() = default;
   Contoh(int nilai1, int nilai2) {
      a = nilai1;
      
      b = new int;	// alokasi memori
      *b = nilai2;
   }   
   
   // copy constructor
   Contoh(const Contoh& obj) {
      static int i=0;
      
      std::cout<<"Pemanggilan copy constructor ke-"
               <<++i
               <<std::endl;
      a = obj.a;
      
      b = new int;
      *b = *(obj.b);
   }
   
   // fungsi yang mengembalikan objek
   Contoh salin() {
      Contoh obj(*this); // memanggil copy constructor
      return obj;
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
   
   // memanggil copy constructor
   Contoh obj2(obj1);
   
   // memanggil copy constructor
   Contoh obj3 = obj1;
   
   // memanggil copy constructor
   Contoh obj4 = obj1.salin();
   
   std::cout<<"\nPada objek pertama"<<std::endl;
   obj1.infoA();
   obj1.infoB();
   
   std::cout<<"\nPada objek kedua"<<std::endl;
   obj2.infoA();
   obj2.infoB();      

   std::cout<<"\nPada objek ketiga"<<std::endl;
   obj3.infoA();
   obj3.infoB();
   
   std::cout<<"\nPada objek keempat"<<std::endl;
   obj4.infoA();
   obj4.infoB();

   return 0;
}
