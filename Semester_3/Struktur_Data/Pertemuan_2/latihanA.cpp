#include <iostream>
using namespace std;

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691" << endl;

    int Nilai[10] = {8, 12, 20, 15, 7, 5, 6, 4, 32, 3};
    int i, Jumlah = 0;
    float Rata_Rata;

    for (i = 0; i < 10; i++)
        Jumlah += Nilai[i];

    Rata_Rata = (float)Jumlah / 10;

    cout << "\n\nDeretan Bilangan = ";

    for (i = 0; i < 10; i++)
        cout << Nilai[i] << " ";

    cout << "\nJumlah Bllangan = " << Jumlah;
    cout << "\nRata - Rata Bilangan = " << Rata_Rata;
}