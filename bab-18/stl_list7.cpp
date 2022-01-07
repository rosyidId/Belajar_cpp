/******************************************************
Nama file: stl_list7.cpp
*******************************************************/

#include <iostream>
#include <list>		// std::list

int main() {   
   int a[] = {10,20,30,40,50};
   std::list<int> l(a, a + sizeof(a)/sizeof(int));
   std::list<int> l1;	// list lain
   
   std::cout<<"Isi list l:"<<std::endl;   
   for (auto it=l.begin(); it!=l.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   // menentukan batas pengambilan
   std::list<int>::iterator dari = l.begin();
   dari++;
   std::list<int>::iterator sampai = l.end();
   sampai--;
   
   // mengambil elemen dari l dan menempatkannya ke l1
   std::list<int>::iterator itr = l1.begin();   
   l1.splice(itr, l, dari, sampai);
      
   std::cout<<"\n\nIsi list l1:"<<std::endl;   
   for (auto it=l1.begin(); it!=l1.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   return 0;
}
