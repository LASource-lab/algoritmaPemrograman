#include<iostream>
using namespace std;

int main(){
    bool lapar = true;
    bool punyaUang = false;

    cout << "Nilai lapar (Angka): " << lapar << endl;
    cout << "Nilai lapar (Huruf): " << boolalpha << lapar << endl;
    cout << "Nilai Punya Uang (Angka): " << noboolalpha << punyaUang << endl;
    cout << "Nilai Punya Uang (Huruf): " << boolalpha << punyaUang << endl;

    return 0;
}