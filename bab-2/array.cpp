/******************************************************
Nama file: array.cpp
*******************************************************/

#include <iostream>

const int JUMLAH_DATA = 5;

int main() {
   
   // deklarasi array
   double data[JUMLAH_DATA];
   
   // deklarasi variabel yang diperlukan
   double total {0.0}, rataRata;
   
   // mengisi nilai ke dalam array
   std::cout<<"Masukkan nilai ke dalam array"<<std::endl;
   for (auto i {0}; i<JUMLAH_DATA; i++)
   {
      std::cout << "Data ke-" << i+1 <<": ";
      std::cin >> data[i];
      total += data[i];
   }
   
   // menghitung nilai rata-rata
   rataRata = total / JUMLAH_DATA;
   
   // menampilkan isi array
   std::cout<<std::endl<<"Isi array\t= [";
   for (auto i {0}; i<JUMLAH_DATA; i++) 
   {
      std::cout<<data[i];
      if (i < JUMLAH_DATA-1) std::cout<<", ";
   }
   std::cout<<"]"<<std::endl;
   
   std::cout<<"Nilai total\t= "<<total<<std::endl;
   std::cout<<"Rata-rata\t= "<<rataRata<<std::endl;

   return 0;
}
