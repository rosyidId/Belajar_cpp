/******************************************************
Nama file: stl_set1.cpp
*******************************************************/

#include <iostream>
#include <set>		// std::set
#include <iterator>	// std::advance()

int main() {   
   std::set<int> s = {10,20,30,40,50};
   
   std::cout<<"Sebelum ditambah:"<<std::endl;   
   for (auto it=s.begin(); it!=s.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   // menambah dua elemen
   std::set<int>::iterator itr = s.begin();
   s.insert(88);
   std::advance(itr,4);  // menaikkan iterator 4 langkah
   s.insert(99);
   
   std::cout<<"\n\nSetelah ditambah:"<<std::endl;   
   for (auto it=s.begin(); it!=s.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   return 0;
}
