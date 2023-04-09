#include <iostream>
using namespace std;

int main() {
    int b, a;
    double ls, tinggi, lpp, ll, r, alas, p, l;

    while (1)
    {
        cout <<"Apa yang ingin kamu hitung?\n1.Segitiga\n2.Lingkaran\n3.Persegi panjang" << endl;
        cin >> a;
    if (a == 1)
    {
        cout << "input alas" << endl;
        cin >> alas;
        cout << "Input tinggi"<< endl;
        cin >> tinggi;
        ls = 0.5*alas*tinggi;
        cout << "luas segitiga=" << ls << endl;
    } else if (a == 2)
    {
        cout << "input jari jari" << endl;
        cin >> r;
        ll = 3.14*r*r;
        cout << "luas lingkaran=" << ll << endl;
    } else if (a == 3)
    {
        cout << "input panjang " << endl;
        cin >> p;
        cout << "input lebar" << endl;
        cin >> l;
        lpp = p*l;
        cout << "luas persegi panjang="<< lpp << endl;
    }else
     {
        cout << "input tidak valid" << endl;
    }

    cout << " apakah kamu sudah selesai menghitung ?\n1. iya\n2. belum" << endl;
    cin >> b;

    if (b == 1)
    {
        break;
    }

    }
    return 0;

}