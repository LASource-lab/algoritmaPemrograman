#include<iostream>
using namespace std;

int main(){
    string nama, prodi, mampu, prestasi;
    float ipk;
    
    cout << "Program Beasiswa" << endl;
    cout << "Masukkan Nama: " << endl;
    getline(cin >> ws, nama);
    cout << "Masukkan Nama Prodi: " << endl;
    getline(cin >> ws, prodi);
    cout << "Masukkan IPK terakhir: " << endl;
    cin >> ipk;
    cout << "Apakah anda mampu secara ekonomi? (ya/tidak) " <<endl;
    cin >> mampu;
    cout << "Apakah anda memiliki prestasi? (ya/tidak): " << endl;
    cin >> prestasi;

    if(ipk >= 3.5){
        if(mampu == "tidak" && prestasi == "ya"){
            cout << "Selamat " << nama << " dari prodi " << prodi <<":\nAnda memenuhi syarat untuk mendapatkan beasiswa." << endl;
        } else if(mampu == "tidak" && prestasi == "tidak"){
            cout << "Maaf " << nama << " dari prodi " << prodi <<":\nAnda tidak memiliki prestasi yang cukup." << endl;
        } else if(mampu == "ya" && prestasi == "ya"){
            cout << "Maaf " << nama << " dari prodi " << prodi <<":\nAnda termasuk berekonomi mampu." << endl;
        } else if(mampu == "ya" && prestasi == "tidak"){
            cout << "Maaf " << nama << " dari prodi " << prodi <<":\nAnda termasuk berekonomi mampu dan tidak memiliki prestasi yang cukup." << endl;
        }
    } else{
        cout << "Maaf " << nama << " dari prodi " << prodi <<":\nIPK Anda tidak mencukupi." << endl;
    }
}