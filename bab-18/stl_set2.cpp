/******************************************************
Nama file: stl_set2.cpp
*******************************************************/

#include <iostream>
#include <set>		// std::set

int main() {   
   std::set<int> s = {10,20,30,40,50};
   
   std::cout<<"Sebelum ditambah:"<<std::endl;   
   for (auto it=s.begin(); it!=s.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   // menambah tiga elemen
   s.insert(99);
   s.insert(88);
   s.insert(77);
   
   std::cout<<"\n\nSetelah ditambah:"<<std::endl;   
   for (auto it=s.begin(); it!=s.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   return 0;
}
