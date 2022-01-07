/******************************************************
Nama file: alias_namespace.cpp
*******************************************************/

#include <iostream>

namespace ContohNamespacePanjang {
   class Stack {
   private:
      int *data;
      int atas;
   public:
      // konstruktor kelas Stack
      Stack() {
        data = new int[10];
        atas = -1;
      }
      
      // destruktor kelas Stack
      ~Stack() {
         delete [] data;
      }
      
      // menambahkan item ke dalam stack
      void push(int nilai) {
         if (atas == 9) {
            std::cout<<"Stack penuh"<<std::endl;
         } else {
            data[++atas] = nilai;
         }
      }
      
      // mengambil item dari dalam stack
      int pop() {
         if (atas < 0) {
            return 0;
         } else {
            return data[atas--];
         }
      }
   };
	
   // fungsi untuk mencetak semua isi stack ke layar
   void cetakStack(Stack *ob) {
      int temp;
      while ((temp = ob->pop()) != 0) {
         std::cout<<temp<<std::endl;
      }
   }
}

int main() {   
   // membuat alias namespace ContohNamespacePanjang 
   // dengan nama cnp
   namespace cnp = ContohNamespacePanjang;
	
   // menggunakan namespace cnp
   using namespace cnp;
	
   Stack *s = new Stack();   
	
   for (auto i {0}; i<10; i++) {
      s->push((i+1) * 10);
   }

   cetakStack(s);
   
   delete s;

   return 0;
}
