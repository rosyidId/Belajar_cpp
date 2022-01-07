/******************************************************
Nama file: stl_vector3.cpp
*******************************************************/

#include <iostream>
#include <vector>	// std::vector

int main() {   
   std::vector<int> v = {10,20,30,40,50};
   
   // menampilkan elemen-elemen vector sebelum ditambah
   std::cout<<"Sebelum ditambah:"<<std::endl;   
   for (auto it=v.begin(); it!=v.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   // menambah dua elemen baru
   v.push_back(60);
   v.push_back(70);
   
   // menampilkan elemen-elemen vector setelah ditambah
   std::cout<<"\n\nSetelah ditambah:"<<std::endl;   
   for (auto it=v.begin(); it!=v.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   return 0;
}
