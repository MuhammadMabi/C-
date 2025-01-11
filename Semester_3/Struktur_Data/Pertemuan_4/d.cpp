#include <iostream>
#include <cstring>
using namespace std;

struct Tinggal
{
    char Jalan[40];
    char Kota[15];
    char Pos[5];
};
struct Tgl_Lahir
{
    int Tanggal;
    int Bulan;
    int Tahun;
};
struct Mahasiswa
{
    char Nim[15];
    char Nama[25];
    Tinggal Alamat;
    Tgl_Lahir Lahir;
};

int main()
{
    Mahasiswa Mhs[5];
    int i;

    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";

    for (i = 0; i < 3; i++)
    {
        cout << "Nim :";
        cin >> Mhs[i].Nim;
        cin.ignore(); 

        cout << "Nama :";
        cin.getline(Mhs[i].Nama, 25); 

        cout << "\nAlamat :\n";
        cout << "\tJalan :";
        cin.getline(Mhs[i].Alamat.Jalan, 40); 

        cout << "\tKota :";
        cin.getline(Mhs[i].Alamat.Kota, 15); 

        cout << "\tPos :";
        cin >> Mhs[i].Alamat.Pos;

        cout << "\nTanggal Lahir :\n";
        cout << "\tTanggal :";
        cin >> Mhs[i].Lahir.Tanggal;
        cout << "\tBulan :";
        cin >> Mhs[i].Lahir.Bulan;
        cout << "\tTahun :";
        cin >> Mhs[i].Lahir.Tahun;
        cout << "\n";
    }

    cout << "\nMencetak Kembali Anggota :\n";

    for (i = 0; i < 3; i++)
    {
        cout << "\n\nAnggota ";

        cout << "\nNim :"
             << Mhs[i].Nim;
        cout << "\nNama :"
             << Mhs[i].Nama;

        cout << "\nJalan :"
             << Mhs[i].Alamat.Jalan;
        cout << "\nKota :"
             << Mhs[i].Alamat.Kota;
        cout << "\nPos :"
             << Mhs[i].Alamat.Pos;

        cout << "\nTanggal Lahir :"
             << Mhs[i].Lahir.Tanggal << "-" << Mhs[i].Lahir.Bulan << "-" << Mhs[i].Lahir.Tahun;
    }

    return 0;
}

// #include <iostream>
// #include <cstring>
// using namespace std;

// struct Tinggal
// {
//     char Jalan[40];
//     char Kota[15];
//     char Pos[5];
// };
// struct Tgl_Lahir
// {
//     int Tanggal;
//     int Bulan;
//     int Tahun;
// };
// struct Mahasiswa
// {
//     char Nim[15];
//     char Nama[25];
//     Tinggal Alamat;
//     Tgl_Lahir Lahir;
// };

// int main()
// {
//     // cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";

//     Mahasiswa Mhs[5];
//     int i;

//     for (i = 0; i < 3; i++)
//     {
//         cout << "Nim :";
//         cin >> Mhs[i].Nim;
//         cout << "Nama :";
//         cin >> Mhs[i].Nama;

//         cout << "\nAlamat :\n";
//         cout << "\tJalan :";
//         cin >> Mhs[i].Alamat.Jalan;
//         cout << "\tKota :";
//         cin >> Mhs[i].Alamat.Kota;
//         cout << "\tPos :";
//         cin >> Mhs[i].Alamat.Pos;

//         cout << "\nTanggal Lahir :\n";
//         cout << "\tTanggal :";
//         cin >> Mhs[i].Lahir.Tanggal;
//         cout << "\tBulan :";
//         cin >> Mhs[i].Lahir.Bulan;
//         cout << "\tTahun :";
//         cin >> Mhs[i].Lahir.Tahun;
//         cout << "\n";
//     }

//     cout << "\nMencetak Kembali Anggota :\n";

//     for (i = 0; i < 3; i++)
//     {
//         cout << "\n\nAnggota ";

//         cout << "\nNim :"
//              << Mhs[i].Nim;
//         cout << "\nNama :"
//              << Mhs[i].Nama;

//         cout << "\nJalan :"
//              << Mhs[i].Alamat.Jalan;
//         cout << "\nKota :"
//              << Mhs[i].Alamat.Kota;
//         cout << "\nPos :"
//              << Mhs[i].Alamat.Pos;

//         cout << "\nTanggal Lahir :"
//              << Mhs[i].Lahir.Tanggal << "-" << Mhs[i].Lahir.Bulan << "-" << Mhs[i].Lahir.Tahun;

//         // cout << "\nTanggal Lahir :"
//         //      << Mhs[i].Lahir.Tanggal;
//         // cout << "\nBulan :"
//         //      << Mhs[i].Lahir.Bulan;
//         // cout << "\nTahun :"
//         //      << Mhs[i].Lahir.Tahun;
//     }

//     return 0;
// }
