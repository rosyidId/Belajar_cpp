/******************************************************
Nama file: linear_search2.cpp
*******************************************************/

#include <iostream>

// fungsi mengembalikan nilai bertipe int
int linearSearch(int array[], int size, int value) {
   int pos {0};
   bool found {false}, stop {false};
   while (pos < size && !found && !stop) {
      if (array[pos] == value) {
         found = true;
      } else {
         if (array[pos] > value) {
            stop = true;
         } else {
            pos += 1;
         }
      }
   }
   return found ? pos : -1;
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

   // mencari nilai 100
   std::cout<<"\nNilai 100: "
            <<linearSearch(data, 5, 100)
            <<std::endl;
   // mencari nilai 150
   std::cout<<"Nilai 150: "
            <<linearSearch(data, 5, 150)
            <<std::endl;
   // mencari nilai 300
   std::cout<<"Nilai 300: "
            <<linearSearch(data, 5, 300)
            <<std::endl;

   return 0;
}
