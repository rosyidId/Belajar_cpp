/******************************************************
Nama file: binary_search.cpp
*******************************************************/

#include <iostream>

int binarySearch(int array[], int first, int last, int value) {
   int middle;
   bool found {false};
   while (first <= last && !found) {
      middle = (first + last) / 2;
      if (array[middle] == value) {
         found = true;
      } else {
         if (value < array[middle]) {
            last = middle - 1;
         } else {
            first = middle + 1;
         }
      }
   }
   return found ? middle : -1;
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
   int data[5] {100,200,300,400,500};

   // menampilkan elemen array
   std::cout<<"Isi array: ";
   cetakArray(data, 5);

   // mencari nilai 200
   std::cout<<"\nNilai 200: "
            <<binarySearch(data, 0, 4, 200)
            <<std::endl;
   // mencari nilai 400
   std::cout<<"Nilai 400: "
            <<binarySearch(data, 0, 4, 400)
            <<std::endl;
   // mencari nilai 700
   std::cout<<"Nilai 700: "
            <<binarySearch(data, 0, 4, 700)
            <<std::endl;
   // mencari nilai 900
   std::cout<<"Nilai 900: "
            <<binarySearch(data, 0, 4, 900)
            <<std::endl;

   return 0;
}
