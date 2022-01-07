/******************************************************
Nama file: stl_vector4.cpp
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
   
   // menambah dua elemen baru menggunakan fungsi insert()
   std::vector<int>::iterator itr = v.begin();
   itr = v.insert(itr+1, 60);
   itr = v.insert(itr+3, 70);
   
   // menampilkan elemen-elemen vector setelah ditambah
   std::cout<<"\n\nSetelah ditambah:"<<std::endl;   
   for (auto it=v.begin(); it!=v.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   return 0;
}
