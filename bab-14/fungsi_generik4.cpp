/******************************************************
Nama file: fungsi_generik4.cpp
*******************************************************/

#include <iostream>

// mendefinisikan fungsi generik 
// untuk proses pengurutan data 
// yang berupa array
template <class T>
void urutkan(
   T *p, 	// pointer ke array yang akan diurutkan
   int n)	// jumlah elemen array
{
   for (int j=1; j<n; j++) {
      for (int k=(n-1); k>=1; k--) {
         if (p[k-1] > p[k]) {
            T temp = p[k-1];
            p[k-1] = p[k];
            p[k] = temp;
         }
      }
   }
}

// mendefinisikan fungsi generik 
// untuk menampilkan data dalam array
template <class T> 
void tampilkan(T *array, int n) {
   for (int i=0; i<n; i++) {
      std::cout<<array[i];
      if (i != n-1) {
    	  std::cout<<", ";
      }
   }
   std::cout<<std::endl;
}


int main() {   
   // array dari tipe int
   int a[5] = { 20, 50, 40, 30, 10 };

   // array dari tipe double
   double b[5] = { 2.13, 4.35, 1.02, 2.03, 1.75 };

   // array dari tipe char
   char c[5] = { 'D', 'B', 'E', 'C', 'A' };

   // menampilkan nilai array 
   // sebelum diurutkan
   std::cout<<"Sebelum diurutkan"<<std::endl;

   std::cout<<"Nilai dari array a: ";
   tampilkan(a, 5);

   std::cout<<"Nilai dari array b: ";
   tampilkan(b, 5);

   std::cout<<"Nilai dari array c: ";
   tampilkan(c, 5); 
  
   // mengurutkan data
   urutkan(a, 5);
   urutkan(b, 5);
   urutkan(c, 5);

   // menampilkan nilai array
   // setelah diurutkan
   std::cout<<"\nSetelah diurutkan"<<std::endl;

   std::cout<<"Nilai dari array a: ";
   tampilkan(a, 5);

   std::cout<<"Nilai dari array b: ";
   tampilkan(b, 5);

   std::cout<<"Nilai dari array c: ";
   tampilkan(c, 5);
  
   return 0;
}
