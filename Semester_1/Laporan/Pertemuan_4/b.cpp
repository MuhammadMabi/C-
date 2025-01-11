#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char pilihan;
    float alas, tinggi, panjang, lebar, jariJari;

    cout << "Menu Perhitungan Luas dan Keliling\n";
    cout << "Pilihan Menu:\n";
    cout << "S. Segitiga\n";
    cout << "P. Persegi Panjang\n";
    cout << "L. Lingkaran\n";
    cout << "Masukkan pilihan (S/P/L): ";
    cin >> pilihan;

    switch (pilihan)
    {
    case 'S':
    {
        cout << "Masukkan alas segitiga: ";
        cin >> alas;
        cout << "Masukkan tinggi segitiga: ";
        cin >> tinggi;

        float luasSegitiga = 0.5 * alas * tinggi;
        float sisiMiring = sqrt((alas * alas) + (tinggi * tinggi));
        float kelilingSegitiga = alas + tinggi + sisiMiring;

        cout << "Luas Segitiga: " << luasSegitiga << endl;
        cout << "Keliling Segitiga: " << kelilingSegitiga << endl;
        break;
    }
    case 'P':
    {
        cout << "Masukkan panjang persegi panjang: ";
        cin >> panjang;
        cout << "Masukkan lebar persegi panjang: ";
        cin >> lebar;

        float luasPersegiPanjang = panjang * lebar;
        float kelilingPersegiPanjang = 2 * (panjang + lebar);

        cout << "Luas Persegi Panjang: " << luasPersegiPanjang << endl;
        cout << "Keliling Persegi Panjang: " << kelilingPersegiPanjang << endl;
        break;
    }

    case 'L':
    {
        cout << "Masukkan jari-jari lingkaran: ";
        cin >> jariJari;

        float luasLingkaran = 3.14 * jariJari * jariJari;
        float kelilingLingkaran = 2 * 3.14 * jariJari;

        cout << "Luas Lingkaran: " << luasLingkaran << endl;
        cout << "Keliling Lingkaran: " << kelilingLingkaran << endl;
        break;
    }

    default:
    {
        cout << "Pilihan tidak valid!";
    }
    }

    return 0;
}
