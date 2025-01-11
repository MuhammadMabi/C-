#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";

    int Nilai[20];
    int i, j, k, n;
    int temp;
    bool tukar;
    cout << "Masukan banyak bilangan :";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "Elemen ke -" << i+1 << " : ";
        cin >> Nilai[i];
    }

    cout << "\nData sebelumnya diurut :";
    for (i = 0; i < n; i++)
    {
        cout << setw(3) << Nilai[i];
    }

    i = 0;
    tukar = true;
    while ((i <= n - 2) && tukar)
    {
        tukar = false;
        for (j = n - 1; j >= i + 1; j--)
        {
            if (Nilai[j] > Nilai[j - 1])
            {
                temp = Nilai[j];
                Nilai[j] = Nilai[j - 1];
                Nilai[j - 1] = temp;
                tukar = true;
                cout << "\nUntuk j =" << j << " : ";
                for (k = 0; k < n; k++)
                {
                    cout << setw(3) << Nilai[k];
                }
            }
        }
        i++;
    }

    cout << "\nData setelah diurut :";
    for (i = 0; i < n; i++)
    {
        cout << setw(3) << Nilai[i];
    }
}