#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";

    vector<int> penjualan;
    penjualan.push_back(150); // Hari ke 1
    penjualan.push_back(450); // Hari ke 2
    penjualan.push_back(250); // Hari ke 3
    penjualan.push_back(550); // Hari ke 4
    penjualan.push_back(600); // Hari ke 5
    penjualan.push_back(800); // Hari ke 6
    penjualan.push_back(700); // Hari ke 7

    int totalPenjualan = 0;
    int penjualanTertinggi = penjualan[0];
    int hariTertinggi = 0;
    int jumlahHari = penjualan.size();

    int i = 0;
    while (i < jumlahHari)
    {
        totalPenjualan += penjualan[i];

        if (penjualan[i] > penjualanTertinggi)
        {
            penjualanTertinggi = penjualan[i];
            hariTertinggi = i + 1;
        }

        i++;
    }

    double rataRataPenjualan = static_cast<double>(totalPenjualan) / jumlahHari;

    cout << "Total Penjualan: " << totalPenjualan << endl;
    cout << "Rata-rata Penjualan per Hari: " << rataRataPenjualan << endl;
    cout << "Hari dengan Penjualan Tertinggi: Hari ke-" << hariTertinggi << " dengan penjualan " << penjualanTertinggi << endl;

    return 0;
}
