#include <iostream>
using namespace std;

int main()
{
    double pembelian;
    cout << "Masukkan jumlah pembelian: ";
    cin >> pembelian;

    switch (static_cast<int>(pembelian))
    {
    case 100000 ... 199999: // Range untuk diskon 5%
        cout << "Bonus: Diskon 5%\n";
        break;
    case 200000 ... 299999: // Range untuk tiket ke Yogya
        cout << "Bonus: Tiket ke Yogya\n";
        break;
    case 300000 ... 399999: // Range untuk tiket ke Bali
        cout << "Bonus: Tiket ke Bali\n";
        break;
    case 400000 ... 499999: // Range untuk jam tangan Rolex
        cout << "Bonus: Jam Tangan Rolex\n";
        break;
    case 500000 ... INT_MAX: // Pembelian di atas 500.000
        cout << "Bonus: Tiket ke Swiss\n";
        break;
    default:
        cout << "Tidak ada bonus untuk pembelian ini.\n";
        break;
    }

    return 0;
}
