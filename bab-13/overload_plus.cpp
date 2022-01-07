/******************************************************
Nama file: overload_plus.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

class MyString {
private:
   std::string text;
public:  
   // konstruktor
   MyString(std::string s) {
      text = s;
   }
  
   void setText(std::string s) {
      text = s;
   }
   
   std::string getText() {
      return text;
   }
  
   // overload operator plus (+)
   MyString operator +(MyString obj) {
      MyString temp = text + obj.getText();
      return temp;
   }
   
};


int main() {   
   // membuat objek dari kelas MyString
   MyString namaDepan {"Muhammad"};
   MyString spasi {" "};
   MyString namaBelakang {"Adam"};
   MyString namaLengkap {""};
   
   // menggunakan operator + untuk menyambung string
   namaLengkap = namaDepan + spasi + namaBelakang;
   
   std::cout<<"Nama depan\t: "<<namaDepan.getText()
            <<std::endl;
   std::cout<<"Nama belakang\t: "<<namaBelakang.getText()
            <<std::endl;
   std::cout<<"Nama lengkap\t: "<<namaLengkap.getText()
            <<std::endl;

   return 0;
}
