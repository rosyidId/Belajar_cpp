/******************************************************
Nama file: multiple_inheritance.cpp
*******************************************************/

#include <iostream>

class A {
private:
   int a;
public:
   A() = default;
   A(int a) {
      this->a = a;
   }
   
   void setA(int a) {
      this->a = a;
   }
   
   double getA() {
      return a;
   }
};

class B {
private:
   int b;
public:
   B() = default;
   B(int b) {
      this->b = b;
   }
   
   void setB(int b) {
      this->b = b;
   }
   
   double getB() {
      return b;
   }
};

// kelas turunan
class C: public A, public B {
private:
   int c;
public:
   C() = default;
   C(int a, int b, int c) : A(a), B(b) {
      this->c = c;
   }
   
   void setC(int c) {
      this->c = c;
   }
   
   double getC() {
      return c;
   }
};

int main() {
   // pointer ke kelas C
   C *obj;

   // membuat objek dari kelas C
   obj = new C(10,20,30);  
   
   // menampilkan nilai-nilai atribut
   std::cout<<"a: "<<obj->getA()<<std::endl;
   std::cout<<"b: "<<obj->getB()<<std::endl;
   std::cout<<"c: "<<obj->getC()<<std::endl;
   
   delete obj;
   
   return 0;
}
