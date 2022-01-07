/******************************************************
Nama file: array_hasilfungsi.cpp
*******************************************************/

#include <iostream>

const int N = 100;
typedef int Array[N]; 

void cetakArray(Array arr, int n) {
   for (auto i {0}; i<n; i++) {
      std::cout<<arr[i]<<" ";
   }
   std::cout<<std::endl;
}

// fungsi yang mengembalikan array
int *gabung(Array arr1, int n1, Array arr2, int n2) {
   int *temp = new int[n1+n2];
   int i {0}, j {0};
   while (i<n1) {
      temp[i] = arr1[i];
      i++;
   }
   while (i<(n1+n2)) {
      temp[i] = arr2[j];
      i++;
      j++;
   }
   return temp;
}

int main() {
   Array a {1, 2, 3, 4, 5};
   Array b {6, 7, 8};
   int *c;
   
   // menampilkan elemen array a
   std::cout<<"Isi array a\t: ";
   cetakArray(a, 5);
   
   // menampilkan elemen array b
   std::cout<<"Isi array b\t: ";
   cetakArray(b, 3);
   
   // menggabung array a dan b
   c = gabung(a, 5, b, 3);
   
   // menampilkan elemen array c
   std::cout<<"Isi array c\t: ";
   cetakArray(c, 8);

   return 0;
}
