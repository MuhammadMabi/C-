#include <iostream>
using namespace std;

int main()
{
    int jumlahAngka;
    cout << "Masukkan jumlah bilangan Fibonacci yang ingin ditampilkan: ";
    cin >> jumlahAngka;

    int angkaSebelumnya = 0, angkaSekarang = 1, iterasi = 0;

    cout << "Fibonacci: ";

    while (iterasi < jumlahAngka)
    {
        cout << angkaSebelumnya << " ";
        int jumlah = angkaSebelumnya + angkaSekarang;
        angkaSebelumnya = angkaSekarang;
        angkaSekarang = jumlah;
        iterasi++;
    }

    cout << endl;

    return 0;
}
