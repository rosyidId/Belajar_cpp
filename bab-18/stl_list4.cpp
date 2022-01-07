/******************************************************
Nama file: stl_list4.cpp
*******************************************************/

#include <iostream>
#include <list>		// std::list

// predikat
bool sama(int x, int y) {
   return x == y;
}

int main() {   
   int a[] = {10,10,20,20,20,30,30,40,40,40,50,50};
   std::list<int> l(a, a + sizeof(a)/sizeof(int));
   
   std::cout<<"Sebelum elemen duplikat dihapus:"<<std::endl;   
   for (auto it=l.begin(); it!=l.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   // menghapus duplikat dari nilai 20
   l.unique(sama);
      
   std::cout<<"\n\nSetelah elemen duplikat dihapus:"<<std::endl;   
   for (auto it=l.begin(); it!=l.end(); ++it) {
      std::cout<<*it<<" ";
   }   
   
   return 0;
}
