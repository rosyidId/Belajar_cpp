/******************************************************
Nama file: fungsi_generik.cpp
*******************************************************/

#include <iostream>

// mendefinisikan fungsi generik (template fungsi)
template <class T>
void tukar(T& a, T& b) {
   T c = a;
   a = b;
   b = c;
}

int main() {   
   char c1 {'A'}, c2 {'Z'};
   int i1 {100}, i2 {200};
   float f1 {1.2F}, f2 {3.4F};
   double d1 {2.5}, d2 {5.2};
   
   // menampilkan nilai-nilai sebelum ditukar
   std::cout<<"Sebelum ditukar"<<std::endl;
   std::cout<<"c1: "<<c1<<"\t c2: "<<c2<<std::endl;
   std::cout<<"i1: "<<i1<<"\t i2: "<<i2<<std::endl;
   std::cout<<"f1: "<<f1<<"\t f2: "<<f2<<std::endl;
   std::cout<<"d1: "<<d1<<"\t d2: "<<d2<<std::endl;
   
   // memanggil fungsi tukar
   tukar(c1,c2);
   tukar(i1,i2);
   tukar(f1,f2);
   tukar(d1,d2);
   
   // menampilkan nilai-nilai setelah ditukar
   std::cout<<"\nSetelah ditukar"<<std::endl;
   std::cout<<"c1: "<<c1<<"\t c2: "<<c2<<std::endl;
   std::cout<<"i1: "<<i1<<"\t i2: "<<i2<<std::endl;
   std::cout<<"f1: "<<f1<<"\t f2: "<<f2<<std::endl;
   std::cout<<"d1: "<<d1<<"\t d2: "<<d2<<std::endl;

   return 0;
}
