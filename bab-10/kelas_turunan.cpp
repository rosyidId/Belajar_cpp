/******************************************************
Nama file: kelas_turunan.cpp
*******************************************************/

#include <iostream>

// mendefinisikan kelas dasar
class Console {
public:
   void print(std::string s) {
      std::cout<<s;
   }
   
   void print(char c) {
      std::cout<<c;
   }
   
   void print(int i) {
      std::cout<<i;
   }
   
   void print(double d) {
      std::cout<<d;
   }   
};

// mendefinisikan kelas turunan
class NewConsole: public Console {
public:
   void printLine(std::string s) {
      print(s);
      std::cout<<std::endl;
   }
   
   void printLine(char c) {
      print(c);
      std::cout<<std::endl;
   }
   
   void printLine(int i) {
      print(i);
      std::cout<<std::endl;
   }
   
   void printLine(double d) {
      print(d);
      std::cout<<std::endl;
   }
};

int main() {
   // membuat objek dari kelas turunan (NewConsole)
   NewConsole obj;
   
   obj.print("Pemrograman ");
   obj.printLine("C++");
   obj.print("Penerbit ");
   obj.printLine("INFORMATIKA");
   
   return 0;
}

