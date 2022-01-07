/******************************************************
Nama file: stl_vector9.cpp
*******************************************************/

#include <iostream>
#include <vector>	// std::vector

int main() {   
   std::vector<int> v = {10,20,30,40,50};
   
   std::cout<<"Keadaan awal"<<std::endl;
   std::cout<<"Nilai : ";   
   for (auto it=v.begin(); it!=v.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   std::cout<<"\nKapasitas: "<<v.capacity()<<std::endl;
   std::cout<<"Jumlah elemen: "<<v.size()<<std::endl;
   
   v.reserve(8);
   
   std::cout<<"\nSetelah pemanggilan v.reserve(8)"<<std::endl;
   std::cout<<"Kapasitas: "<<v.capacity()<<std::endl;
   std::cout<<"Jumlah elemen: "<<v.size()<<std::endl;
   
   v.resize(7);
   
   std::cout<<"\nSetelah pemanggilan v.resize(7)"<<std::endl;
   std::cout<<"Kapasitas: "<<v.capacity()<<std::endl;
   std::cout<<"Jumlah elemen: "<<v.size()<<std::endl;

   std::cout<<"\nKeadaan akhir"<<std::endl;
   std::cout<<"Nilai : ";   
   for (auto it=v.begin(); it!=v.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   return 0;
}
