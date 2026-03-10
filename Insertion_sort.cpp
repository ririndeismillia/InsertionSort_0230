#include <iostream>
using namespace std;

int arr[20];
int n;

void input (){
    while (true){
        cout << "Masukkan Jumlah Data Pada Array : ";
        cin >> n;

        if (n <= 20){
            break;
        }
        else{
            cout << "\nArray Tidak Boleh Lebih dari 20\n";
        }
    }
    cout << endl;
    cout << "==============================================";
    cout << "============Masukkan Element Array============";
    cout << "==============================================";

    for (int i = 0; i < n; i++ ){
        cout << "Data ke-" << ": ";
        cin >> arr[i];
    }
}

void insertionsort(){
    int temp;
    int j;

    for (int i = 0; i < n; i++){
        
    }
}