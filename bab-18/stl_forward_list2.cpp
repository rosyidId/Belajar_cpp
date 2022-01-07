/******************************************************
Nama file: stl_forward_list2.cpp
*******************************************************/

#include <iostream>
#include <forward_list>		// std::forward_list

// predikat dalam bentuk fungsi
bool lebihBesar9(const int& nilai) {
   return nilai >= 10;
}

// predikat dalam bentuk kelas
class ganjil {
public:
   bool operator()(const int& nilai) {
      return nilai%2 == 1;
   }
};

void cetakList(std::forward_list<int>& lst) {
   for (auto it=lst.begin(); it!=lst.end(); ++it) {
      std::cout<<*it<<" ";
   }
   std::cout<<std::endl;
}

int main() {   
   std::forward_list<int> fl = {1,2,3,4,5,10,11,12,13,14,15};
   
   std::cout<<"Sebelum dihapus:"<<std::endl;   
   cetakList(fl);
   
   // menghapus 13
   fl.remove(13);
   std::cout<<"\nSetelah nilai 13 dihapus:"<<std::endl;   
   cetakList(fl);
   
   // menghapus elemen-elemen dengan nilai lebih besar 
   // atau sama dengan 10
   fl.remove_if(lebihBesar9);
   std::cout<<"\nSetelah elemen lebih besar 9 dihapus:"<<std::endl;   
   cetakList(fl);
   
   // menghapus elemen-elemen dengan nilai ganjil
   fl.remove_if(ganjil());
      
   std::cout<<"\nSetelah nilai ganjil dihapus:"<<std::endl;   
   cetakList(fl);
   
   return 0;
}
