/******************************************************
Nama file: linear_search1.cpp
*******************************************************/

#include <iostream>

// fungsi mengembalikan nilai bertipe int
int linearSearch(int array[], int size, int value) {
   int pos {0};
   bool found {false};
   while (pos < size && !found) {
      if (array[pos] == value) {
         found = true;
      } else {
         pos += 1;
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
   int data[5] {300,200,500,400,100};

   // menampilkan elemen array
   std::cout<<"Isi array: ";
   cetakArray(data, 5);

   // mencari nilai 200
   std::cout<<"\nNilai 200: "
            <<linearSearch(data, 5, 200)
            <<std::endl;
   // mencari nilai 400
   std::cout<<"Nilai 400: "
            <<linearSearch(data, 5, 400)
            <<std::endl;
   // mencari nilai 700
   std::cout<<"Nilai 700: "
            <<linearSearch(data, 5, 700)
            <<std::endl;
   // mencari nilai 900
   std::cout<<"Nilai 900: "
            <<linearSearch(data, 5, 900)
            <<std::endl;

   return 0;
}
