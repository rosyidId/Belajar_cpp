/******************************************************
Nama file: stl_forward_list1.cpp
*******************************************************/

#include <iostream>
#include <forward_list>		// std::forward_list

int main() {   
   std::forward_list<int> fl = {10,20,30,40,50};
   
   std::cout<<"Sebelum dihapus:"<<std::endl;   
   for (auto it=fl.begin(); it!=fl.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   // menghapus elemen pertama
   fl.pop_front(); 
   
   // menghapus elemen ketiga (setelah elemen pertama dihapus)
   std::forward_list<int>::iterator itr = fl.begin();
   itr++;	// iterator menunjuk ke alamat dari elemen kedua
   fl.erase_after(itr);
   
   std::cout<<"\n\nSetelah dihapus:"<<std::endl;   
   for (auto it=fl.begin(); it!=fl.end(); ++it) {
      std::cout<<*it<<" ";
   }
   
   return 0;
}
