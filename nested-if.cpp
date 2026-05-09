#include<iostream>
using namespace std;

int main(){
    string nama;
    int password;
    nama = "Reza";
    password = 12345;

    cout << "Masukkan nama: " << endl;
    cin >> nama;
    cout << "Masukkan password: " << endl;
    cin >> password;

    if(nama == "Reza"){
        if(password == 12345){
            cout << "Selamat datang, " << nama << "!" << endl;
        } else{
            cout << "Password yang Anda masukan tidak valid!" << endl;
        }
    } else{
        cout << "Nama yang Anda masukan tidak valid!" << endl;
    }
}