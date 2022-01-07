/******************************************************
Nama file: stl_stack.cpp
*******************************************************/

#include <iostream>
#include <stack>	// std::stack

int main() {   
   std::stack<int> st;
      
   // menambah lima elemen: 10, 20, 30, 40, dan 50
   for (int i=0; i<5; i++) {	  
	  st.push((i+1) * 10);
   }    
   
   std::cout<<"Mengambil isi stack:"<<std::endl;   
   for (int i=0; i<5; i++) {
      int data = st.top();	// mengakses nilai elemen terakhir
      std::cout<<data<<std::endl;
      st.pop();	// menghapus elemen terakhir
   }
   
   return 0;
}
