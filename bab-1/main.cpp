#include <iostream>

using namespace std;

int main(){

float uas = 74, uts = 89, tugas = 90, kuis = 60,jumlah;
jumlah = uas + uts + tugas + kuis;
int add = 4;

float hasil;

hasil = jumlah / add;
cout << "rata-rata = " << hasil << endl;
cout << "total = " << jumlah << endl;

if(hasil < 80){
    cout << "nilai anda lulus" << endl;
}
else{
    cout << " maaf anda tidak lulus " << endl;
}

return 0;

}