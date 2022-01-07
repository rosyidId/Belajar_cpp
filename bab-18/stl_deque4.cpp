/******************************************************
Nama file: stl_deque4.cpp
*******************************************************/

#include <iostream>
#include <deque>	// std::deque

int main() {   
   std::deque<int> d = {10,20,30,40,50};
   std::deque<int>::iterator itr = d.begin();
   
   std::cout<<"Sebelum ditambah:"<<std::endl;
   for (auto it=d.begin(); it!=d.end(); ++it) {
      std::cout<<*it<<" ";
   }
      
   // menyisipkan 88 ke posisi ke-1
   itr = d.insert(itr+1, 88);
   
   // menyisipkan 99 ke posisi ke-4
   itr = d.insert(itr+3, 99);
      
   std::cout<<"\n\nSetelah ditambah:"<<std::endl;
   for (auto it=d.begin(); it!=d.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   return 0;
}
