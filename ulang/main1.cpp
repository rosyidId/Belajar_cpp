#include <iostream>
using namespace std;

int main(){

    int arr[5];

    // cout << arr[0] << endl;
    // cout << arr[1] << endl;
    // cout << arr[2] << endl;
    // cout << arr[3] << endl;
    // cout << arr[4] << endl;

    for (auto i{0}; i < 5; i++){

        cout << "masukkan nilai array : " ;
        cin >> arr[i];
        
    }
    

    return 0;
}