/******************************************************
Nama file: fungsi_generik2.cpp
*******************************************************/

#include <iostream>

// mendefinisikan fungsi generik
// dengan satu parameter generik
template <class T>
void cetak(T a) {
   std::cout<<a<<std::endl;
}

// mendefinisikan fungsi generik
// dengan dua parameter generik
template <class T1, class T2>
void cetak(T1 a, T2 b) {
   std::cout<<a<<" dan "<<b<<std::endl;
}

// mendefinisikan fungsi generik
// dengan tiga parameter generik
template <class T1, class T2, class T3>
void cetak(T1 a, T2 b, T3 c) {
   std::cout<<a<<", "<<b<<", dan "<<c<<std::endl;
}

int main() {   
   // memanggil fungsi cetak() dengan satu parameter
   std::cout<<"Satu parameter:"<<std::endl;
   cetak(100);		// int
   cetak("C++");	// std::string
   
   // memanggil fungsi cetak() dengan dua parameter
   std::cout<<"\nDua parameter:"<<std::endl;
   cetak(100, 200);		// int dan int
   cetak('C', "C++");	// char dan std::string	
   
   // memanggil fungsi cetak() dengan tiga parameter
   std::cout<<"\nTiga parameter:"<<std::endl;
   cetak(100, 200, 300);		// int, int, dan int
   cetak('C', "C++", "Python");	// char, std::string, dan std::string
   
   return 0;
}
