#include <iostream>
using namespace std;

int main()
{
    int kode;
    string hari;

    cout << "Masukkan kode (1-7): ";
    cin >> kode;

    if (kode == 1)
    {
        hari = "Senin";
    }
    else if (kode == 2)
    {
        hari = "Selasa";
    }
    else if (kode == 3)
    {
        hari = "Rabu";
    }
    else if (kode == 4)
    {
        hari = "Kamis";
    }
    else if (kode == 5)
    {
        hari = "Jumat";
    }
    else if (kode == 6)
    {
        hari = "Sabtu";
    }
    else if (kode == 7)
    {
        hari = "Minggu";
    }
    else
    {
        hari = "Pilihan tidak ada";
    }

    cout << "Kode: " << kode << " -> Hari: " << hari << endl;

    return 0;
}
