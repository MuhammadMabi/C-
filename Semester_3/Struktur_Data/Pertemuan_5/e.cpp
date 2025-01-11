#include <iostream>
#include <iomanip>
using namespace std;

const int N = 100;

void Baca(int Nilai[], int &M);
void Cetak(int Nilai[], int &M);
void Jumlah(int Nilai[], int &M, int &Jlh, float &Rata);

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";

    int M;
    int Nilai[N];
    int Jlh = 0;
    float Rata;
    cout << "Banyak Elemen : ";
    cin >> M;

    Baca(Nilai, M);

    cout << "\n Elemen Elemen : ";

    Cetak(Nilai, M);
    Jumlah(Nilai, M, Jlh, Rata);

    cout << "\n Jumlah Bilangan : " << Jlh;
    cout << "\n Rata-rata Bilangan : " << Rata;
}

void Cetak(int Nilai[], int &M)
{
    int i;
    for (i = 1; i <= M; i++)
    {
        cout << setw(3) << Nilai[i];
    }
}

void Baca(int Nilai[], int &M)
{
    int i;
    for (i = 1; i <= M; i++)
    {
        cout << "Elemen ke-" << i << " : ";
        cin >> Nilai[i];
    }
}

void Jumlah(int Nilai[], int &M, int &Jlh, float &Rata)
{
    int i;
    for (i = 1; i <= M; i++)
    {
        Jlh += Nilai[i];
    }

    Rata = (float)Jlh / M;
}