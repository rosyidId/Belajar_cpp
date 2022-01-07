/******************************************************
Nama file: stl_list5.cpp
*******************************************************/

#include <iostream>
#include <list>		// std::list

int main() {   
   int a[] = {10,20,30,40,50};
   std::list<int> l(a, a + sizeof(a)/sizeof(int));
   
   std::cout<<"Sebelum dibalik:"<<std::endl;   
   for (auto it=l.begin(); it!=l.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   // membalik urutan elemen
   l.reverse();
      
   std::cout<<"\n\nSetelah dibalik:"<<std::endl;   
   for (auto it=l.begin(); it!=l.end(); ++it) {
      std::cout<<*it<<" ";
   }   
   
   return 0;
}
