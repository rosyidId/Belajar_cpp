/******************************************************
Nama file: bubble_sort.cpp
*******************************************************/

#include <iostream>

void bubbleSort(int *array, int size) {   
   for (auto i {0}; i<size-1; i++) {
      for (auto j {size-1}; j>i; j--) {
         if (array[j] < array[j-1]) {
            int temp = array[j];
            array[j] = array[j-1];
            array[j-1] = temp;
         }
      }
   }
}

void cetakArray(int array[], int size) {
   std::cout<<"[";
   for (auto i {0}; i<size; i++) {
      std::cout<<array[i];
      if (i != size-1) std::cout<<", ";
   }
   std::cout<<"]"<<std::endl;
}

int main() {
   int data[8] {9, 7, 10, 8, 12, 11, 14, 13};

   /* menampilkan elemen array sebelum diurutkan */
   std::cout<<"Sebelum diurutkan: ";
   cetakArray(data, 8);

   /* mengurutkan array */
   bubbleSort(data, 8);

   /* menampilkan elemen array setelah diurutkan */
   std::cout<<"Setelah diurutkan: ";
   cetakArray(data, 8);

   return 0;
}
