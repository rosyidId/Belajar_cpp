/******************************************************
Nama file: array_parameter1.cpp
*******************************************************/

#include <iostream>
#include <iomanip>	// std::fixed

const int N = 5;
typedef int Array[N]; 

// mendefinisikan fungsi dengan parameter bertipe array
void cetakArray(Array arr) {
   for (auto i {0}; i<N; i++) {
      std::cout<<arr[i]<<" ";
   }
   std::cout<<std::endl;
}

double hitungRataRata(Array arr) {
   int jumlah {0};
   for (auto i {0}; i<N; i++) {
      jumlah += arr[i];
   }
   return (double) jumlah / N;
}

int main() {
   Array a {1, 2, 3, 4, 5};
   
   // menampilkan elemen array a
   std::cout<<"Isi array a\t: ";
   cetakArray(a);
   
   // menampilkan nilai rata-rata
   std::cout<<std::fixed;
   std::cout<<"Rata-rata\t: ";
   std::cout<<hitungRataRata(a);

   return 0;
}
