#include<iostream>
using namespace std;

int main(){
    int nilai;
    string nama;

    cout << "Masukkan nama: " << endl;
    cin >> nama;
    cout << "Masukkan nilai: " << endl;
    cin >> nilai;

    if (nilai> 100 || nilai < 0){
        cout << "Maaf, nilai yang Anda masukan tidak valid!" << endl;
    } else if(nilai >= 90){
        cout << "Selamat " << nama << ", kamu mendapatkan nilai A!" << endl;
    } else if(nilai >= 80){
        cout << "Selamat " << nama << ", kamu mendapatkan nilai B!" << endl;
    } else if(nilai >= 70){
        cout << "Selamat " << nama << ", kamu mendapatkan nilai C!" << endl;
    } else if(nilai >= 60){
        cout << "Selamat " << nama << ", kamu mendapatkan nilai D!" << endl;
    } else{
        cout << "Maaf " << nama << ", kamu mendapatkan nilai E!" << endl;
    }
    return 0;
}