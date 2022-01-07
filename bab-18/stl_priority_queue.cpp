/******************************************************
Nama file: stl_priority_queue.cpp
*******************************************************/

#include <iostream>
#include <queue>	// std::priority_queue

int main() {   
   std::priority_queue<int> pq;
      
   // menambah lima elemen dengan keadaan tidak terurut
   pq.push(30);
   pq.push(50);
   pq.push(10);
   pq.push(40);
   pq.push(20);
   
   std::cout<<"Mengambil isi priority_queue:"<<std::endl;   
   for (int i=0; i<5; i++) {
      int data = pq.top();	// mengakses nilai elemen terakhir
      std::cout<<data<<std::endl;
      pq.pop();	// menghapus elemen terakhir
   }
   
   return 0;
}
