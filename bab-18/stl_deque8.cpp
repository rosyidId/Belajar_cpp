/******************************************************
Nama file: stl_deque8.cpp
*******************************************************/

#include <iostream>
#include <deque>	// std::deque

int main() {   
   std::deque<int> d;	// mula-mula d kosong
   int n;		// jumlah elemen antrian
   int nilai;	// nilai elemen
   
   std::cout<<"Masukkan jumlah elemen antrian: ";
   std::cin>>n;
      
   for (int i=0; i<n; i++) {
      std::cout<<"Elemen ke-"<<i+1<<": ";
      std::cin>>nilai;
      d.push_front(nilai);
   }
        
   std::cout<<"\nPengambilan data antrian:"<<std::endl;
   for (int i=0; i<n; i++) {      
      nilai = d.back();
      d.pop_back();
      std::cout<<"Pengambilan ke-"<<i+1<<": "<<nilai
               <<" (sisa "<<d.size()<<" elemen)"
               <<std::endl;      
   }
   
   return 0;
}
