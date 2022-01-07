/******************************************************
Nama file: referensi.cpp
*******************************************************/

#include <iostream>

int main() {
   int a {9};
   int& refa {a};
   
   std::cout<<"Sebelum a dan refa diubah"<<std::endl;
   std::cout<<"Nilai a\t\t: "<<a<<std::endl;
   std::cout<<"Nilai refa\t: "<<refa<<std::endl;
   
   a = 10; // mengubah nilai variabel a
   
   std::cout<<"\nSetelah a diubah"<<std::endl;
   std::cout<<"Nilai a\t\t: "<<a<<std::endl;
   std::cout<<"Nilai refa\t: "<<refa<<std::endl;
   
   refa = 11; // mengubah nilai referensi refa
   
   std::cout<<"\nSetelah refa diubah"<<std::endl;
   std::cout<<"Nilai a\t\t: "<<a<<std::endl;
   std::cout<<"Nilai refa\t: "<<refa<<std::endl;
   
   return 0;
}
