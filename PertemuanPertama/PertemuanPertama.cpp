#include <iostream>
using namespace std;

int main()
{
    //Begin
    //Numeric nAlas, nTinggi, nLuas
    //Display 'Masukan Alas = '
    //accept nAlas
    //Display 'Masukan Tinggi = '
    //Accept nTinggi
    //Compute nLuas = nAlas*nTinggi/2
    //Display 'Luasnya = ' + nLuas
    //End

    float nAlas, nTinggi, nLuas;
    cout << "Masukan Alas = ";
    cin >> nAlas;
    cout << "Masukan Tinggi = ";
    cin >> nTinggi;
    nLuas = nAlas * nTinggi / 2;
    cout << "Luasnya = " << nLuas;

    int panjang, lebar, luas;
    cout << "Masukan Panjang = ";
    cin >> panjang;
    cout << "Masukan Lebar = ";
    cin >> lebar;
    luas = panjang * lebar;
    cout << "Luas Persegi Panjang adalah = " << luas;


}