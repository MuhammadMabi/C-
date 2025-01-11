#include <iostream>
#include <iomanip>
using namespace std;

void Cetak(int data[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << setw(3) << data[i];
    }
}

int Partisi(int data[], int p, int r)
{
    int x, i, j, temp;
    x = data[p];
    i = p;
    j = r;

    while (1)
    {
        while (data[j] > x)
        {
            j--;
        }
        while (data[i] < x)
        {
            i++;
        }

        if (i < j)
        {
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
        else
        {
            return j;
        }
    }
}

void Quick_Sort(int data[], int p, int r)
{
    int q;
    if (p < r)
    {
        q = Partisi(data, p, r + 1);
        Quick_Sort(data, p, q);
        Quick_Sort(data, q + 1, r);
    }
}

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";

    int Nilai[20];
    int i, n;
    cout << "Masukan banyak bilangan :";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "Elemen ke -" << i+1 << " : ";
        cin >> Nilai[i];
    }

    cout << "\nData sebelumnya diurut :";
    Cetak(Nilai, n);
    Quick_Sort(Nilai, 0, n - 1);
    cout << "\nData setelah diurut :";
    Cetak(Nilai, n);

    return 0;
}