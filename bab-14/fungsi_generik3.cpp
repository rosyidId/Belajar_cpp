/******************************************************
Nama file: fungsi_generik3.cpp
*******************************************************/

#include <iostream>

// mendefinisikan fungsi generik
// dengan satu parameter generik
template <class T>
void cetak(T a) {
   std::cout<<a<<std::endl;
}

// mendefinisikan fungsi non-generik
// dengan dua parameter
void cetak(int a, int b) {
   std::cout<<a<<" dan "<<b<<std::endl;
}

int main() {   
   // memanggil fungsi generik
   std::cout<<"Memanggil fungsi generik:"<<std::endl;
   cetak(100);		// int
   cetak("C++");	// std::string
   
   // memanggil fungsi non-generik
   std::cout<<"\nMemanggil fungsi non-generik:"<<std::endl;
   cetak(100, 200);
   cetak(300, 400);   
   
   return 0;
}
