/******************************************************
Nama file: stl_queue.cpp
*******************************************************/

#include <iostream>
#include <queue>	// std::queue

int main() {   
   std::queue<int> q;
      
   // menambah lima elemen: 10, 20, 30, 40, dan 50
   for (int i=0; i<5; i++) {	  
	  q.push((i+1) * 10);
   }    
   
   std::cout<<"Jumlah elemen\t: "<<q.size()<<std::endl;
   std::cout<<"Elemen pertama\t: "<<q.front()<<std::endl;
   std::cout<<"Elemen terakhir\t: "<<q.back()<<std::endl;
   
   std::cout<<"\nMengambil isi queue:"<<std::endl;   
   for (int i=0; i<5; i++) {
      int data = q.front();	// mengakses nilai elemen pertama
      std::cout<<data<<std::endl;
      q.pop();	// menghapus elemen pertama
   }
   
   return 0;
}
