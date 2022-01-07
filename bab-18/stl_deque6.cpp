/******************************************************
Nama file: stl_deque6.cpp
*******************************************************/

#include <iostream>
#include <deque>	// std::deque

int main() {   
   std::deque<int> d = {10,20,30,40,50};
   
   std::cout<<"Sebelum dihapus ("<<d.size()<<" elemen):"
            <<std::endl;   
   for (auto it=d.begin(); it!=d.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   // menghapus dua elemen
   std::deque<int>::iterator itr = d.begin();
   itr = d.erase(itr+1);	// menghapus 20
   d.erase(itr+1);	// menghapus 40
      
   std::cout<<"\n\nSetelah dihapus ("<<d.size()<<" elemen):"
            <<std::endl;
   for (auto it=d.begin(); it!=d.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   // mengosongkan atau menghapus semua elemen
   d.clear();
   
   std::cout<<"\n\nSetelah dikosongkan ("<<d.size()<<" elemen)"
            <<std::endl;
   
   return 0;
}
