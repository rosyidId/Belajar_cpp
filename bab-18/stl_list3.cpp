/******************************************************
Nama file: stl_list3.cpp
*******************************************************/

#include <iostream>
#include <list>		// std::list

// predikat dalam bentuk fungsi
bool angka_tunggal(const int& nilai) {
   return nilai < 10;
}

// predikat dalam bentuk kelas
class genap {
public:
   bool operator()(const int& nilai) {
      return nilai%2 == 0;
   }
};

void cetakList(std::list<int>& lst) {
   for (auto it=lst.begin(); it!=lst.end(); ++it) {
      std::cout<<*it<<" ";
   }
   std::cout<<std::endl;
}

int main() {   
   int a[] = {1,2,3,4,5,10,11,12,13,14,15};
   std::list<int> l(a, a + sizeof(a)/sizeof(int));
   
   std::cout<<"Sebelum dihapus:"<<std::endl;   
   cetakList(l);
   
   // menghapus 4
   l.remove(4);
   // menghapus 13
   l.remove(13);
   std::cout<<"\nSetelah nilai 4 dan 13 dihapus:"<<std::endl;   
   cetakList(l);
   
   // menghapus elemen-elemen dengan angka tunggal
   l.remove_if(angka_tunggal);
   std::cout<<"\nSetelah angka tunggal dihapus:"<<std::endl;   
   cetakList(l);
   
   // menghapus elemen-elemen dengan nilai genap
   l.remove_if(genap());
      
   std::cout<<"\nSetelah nilai genap dihapus:"<<std::endl;   
   cetakList(l);
   
   return 0;
}
