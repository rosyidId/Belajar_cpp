/******************************************************
Nama file: stl_list2.cpp
*******************************************************/

#include <iostream>
#include <list>		// std::list

int main() {   
   int a[] = {10,20,30,40,50};
   std::list<int> l(a, a + sizeof(a)/sizeof(int));
   
   std::cout<<"Sebelum ditambah:"<<std::endl;   
   for (auto it=l.begin(); it!=l.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   // menambah elemen baru pada posisi awal
   l.push_front(77);
   
   // menyisipkan elemen baru pada posisi kedua
   std::list<int>::iterator itr = l.begin();
   itr++;
   l.insert(itr, 88);
   
   // menambah elemen baru pada posisi akhir
   l.push_back(99);
   
   std::cout<<"\n\nSetelah ditambah:"<<std::endl;   
   for (auto it=l.begin(); it!=l.end(); ++it) {
      std::cout<<*it<<" ";
   }   
   
   return 0;
}
