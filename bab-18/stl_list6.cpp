/******************************************************
Nama file: stl_list6.cpp
*******************************************************/

#include <iostream>
#include <list>		// std::list

int main() {   
   int a[] = {40,10,30,50,20};
   std::list<int> l(a, a + sizeof(a)/sizeof(int));
   
   std::cout<<"Sebelum diurutkan:"<<std::endl;   
   for (auto it=l.begin(); it!=l.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   // mengurutkan elemen
   l.sort();
      
   std::cout<<"\n\nSetelah diurutkan:"<<std::endl;   
   for (auto it=l.begin(); it!=l.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   return 0;
}
