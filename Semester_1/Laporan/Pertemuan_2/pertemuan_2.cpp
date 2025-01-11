#include <iostream>
using namespace std;

int main()
{
    float jari_jari, volume, luas_permukaan, pi;
    pi = 3.14;

    cout << "Masukkan jari-jari bola: ";
    cin >> jari_jari;

    // volume bola
    volume = (4.0 / 3.0) * pi * (jari_jari * jari_jari * jari_jari);

    // luas permukaan bola
    luas_permukaan = 4 * pi * (jari_jari * jari_jari);

    // hasil perhitungan
    cout << "Volume bola adalah: " << volume << endl;
    cout << "Luas permukaan bola adalah: " << luas_permukaan << endl;

    return 0;
}
