#include<iostream>
using namespace std;

int main(){
    int umur;
    string nama;

    cout << "Masukan nama Anda: " << endl;
    cin >> nama;
    cout << "Masukan umur Anda: " << endl;
    cin >> umur;

    if(umur >= 18){
        cout << "Selamat " << nama << ", Anda sudah dewasa!" << endl;
    } else{
        cout << "Maaf " << nama << ", Anda masih di bawah umur!" << endl;
    }
}