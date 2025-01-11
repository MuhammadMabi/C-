#include <iostream>
#include <queue>
using namespace std;

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";
    
    queue<char> antrian;
    char pilihan, karakter;

    do
    {
        cout << "\nPilih operasi:\n";
        cout << "1. INSERT (Masukkan Karakter)\n";
        cout << "2. DELETE (Hapus Karakter Pertama)\n";
        cout << "3. CETAK ANTRIAN (Tampilkan Isi Antrian)\n";
        cout << "4. QUIT (Keluar)\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case '1':
            cout << "Masukkan karakter: ";
            cin >> karakter;
            antrian.push(karakter);
            cout << "Karakter '" << karakter << "' dimasukkan ke antrian.\n";
            break;

        case '2':
            if (!antrian.empty())
            {
                cout << "Karakter '" << antrian.front() << "' dihapus dari antrian.\n";
                antrian.pop();
            }
            else
            {
                cout << "Antrian kosong, tidak ada karakter yang dihapus.\n";
            }
            break;

        case '3':
            if (!antrian.empty())
            {
                cout << "Isi antrian: ";
                queue<char> temp = antrian;
                while (!temp.empty())
                {
                    cout << temp.front() << " ";
                    temp.pop();
                }
                cout << endl;
            }
            else
            {
                cout << "Antrian kosong.\n";
            }
            break;

        case '4':
            cout << "Keluar dari program.\n";
            break;

        default:
            cout << "Pilihan tidak valid.\n";
        }
    } while (pilihan != '4');

    return 0;
}