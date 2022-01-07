/******************************************************
Nama file: linear_search.cpp
*******************************************************/

#include <iostream>

bool linearSearch(int array[], int size, int value) {
   int pos {0};
   bool found {false};
   while (pos < size && !found) {
      if (array[pos] == value) {
         found = true;
      } else {
         pos += 1;
      }
   }
   return found;
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
   std::cout<<"\nNilai 200 "
            <<(linearSearch(data, 5, 200) ? 
               "ditemukan" : "tidak ditemukan")
            <<std::endl;
   // mencari nilai 400
   std::cout<<"Nilai 400 "
            <<(linearSearch(data, 5, 400) ? 
               "ditemukan" : "tidak ditemukan")
            <<std::endl;
   // mencari nilai 700
   std::cout<<"Nilai 700 "
            <<(linearSearch(data, 5, 700) ? 
               "ditemukan" : "tidak ditemukan")
            <<std::endl;
   // mencari nilai 900
   std::cout<<"Nilai 900 "
            <<(linearSearch(data, 5, 900) ? 
               "ditemukan" : "tidak ditemukan")
            <<std::endl;

   return 0;
}
