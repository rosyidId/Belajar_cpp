/******************************************************
Nama file: stl_vector5.cpp
*******************************************************/

#include <iostream>
#include <vector>	// std::vector

int main() {   
   std::vector<int> v = {10,20,30,40,50};
   
   // menampilkan elemen-elemen vector sebelum diubah
   std::cout<<"Sebelum diubah:"<<std::endl;   
   for (auto it=v.begin(); it!=v.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   // mengubah elemen
   v.at(0) = 88;
   v.at(1) = 99;
   
   // menampilkan elemen-elemen vector setelah diubah
   std::cout<<"\n\nSetelah diubah:"<<std::endl;   
   for (auto it=v.begin(); it!=v.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   return 0;
}
