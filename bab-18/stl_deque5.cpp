/******************************************************
Nama file: stl_deque5.cpp
*******************************************************/

#include <iostream>
#include <deque>	// std::deque

int main() {   
   std::deque<int> d = {10,20,30,40,50};   
   
   std::cout<<"Sebelum dihapus:"<<std::endl;
   for (auto it=d.begin(); it!=d.end(); ++it) {
      std::cout<<*it<<" ";
   }
      
   // menangkap elemen pertama
   int a = d.front();
   // menghapus elemen pertama
   d.pop_front();
   
   // menangkap elemen terakhir
   int b = d.back();
   // menghapus elemen terakhir
   d.pop_back();
   
   std::cout<<"\n\nElemen yang dihapus:"<<std::endl;
   std::cout<<a<<" dan "<<b<<std::endl;
   
   std::cout<<"\nSetelah dihapus:"<<std::endl;
   for (auto it=d.begin(); it!=d.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   return 0;
}
