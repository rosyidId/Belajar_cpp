/******************************************************
Nama file: stl_forward_list.cpp
*******************************************************/

#include <iostream>
#include <forward_list>		// std::forward_list

int main() {   
   std::forward_list<int> fl = {10,20,30,40,50};
   
   std::cout<<"Sebelum ditambah:"<<std::endl;   
   for (auto it=fl.begin(); it!=fl.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   // menambah elemen di posisi awal
   fl.push_front(88); 
   
   // menambah elemen setelah elemen kedua
   std::forward_list<int>::iterator itr = fl.begin();
   itr++;	// iterator menunjuk ke alamat dari elemen kedua
   fl.insert_after(itr, 99);
   
   std::cout<<"\n\nSetelah ditambah:"<<std::endl;   
   for (auto it=fl.begin(); it!=fl.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   return 0;
}
