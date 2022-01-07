/******************************************************
Nama file: fungsi_konversi.cpp
*******************************************************/

#include <iostream>

const int MAX = 10;

class Stack {
   int data[MAX];
   int atas;
public:
   Stack() {
      atas = 0;    // jumlah elemen mula-mula
   }

   // meletakkan sebuah nilai ke dalam stack
   void push(int nilai) {
      if (atas == MAX) {
         std::cout<<"Stack penuh"<<std::endl;
      } else {
         data[atas++] = nilai;
      }
   }

   // mengambil sebuah nilai dari stack
   int pop() {
      if (atas < 0) {
         std::cout<<"Stack kosong"<<std::endl;
         return 0;
      } else {
         return data[--atas];
      }
   }

   // fungsi konversi dari tipe Stack ke tipe int
   operator int() {
      return atas;
   }
};

int main() {   
   Stack ob;
   int jumlah;

   for (auto i {0}; i<6; i++) {
      ob.push(i+1);
   }

   // konversi dari tipe Stack ke tipe int
   jumlah = ob;

   std::cout<<"Jumlah elemen maksimal stack \t\t: "
      <<MAX<<std::endl;
   std::cout<<"Jumlah elemen yang telah diisikan  \t: "
      <<jumlah<<std::endl;
   std::cout<<"Jumlah sisa ruang di dalam stack \t: ";
   std::cout<<MAX - jumlah<<std::endl<<std::endl;  

   // menampilkan isi stack
   std::cout<<"Isi stack :"<<std::endl;
   for (auto i {0}; i<6; i++) {
      std::cout<<ob.pop()<<" ";
   }

   return 0;
}
