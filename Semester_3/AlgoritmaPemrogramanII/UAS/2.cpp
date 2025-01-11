#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";

    vector<int> angka;
    int n, input;

    cout << "Masukkan jumlah elemen dalam array: ";
    cin >> n;

    cout << "Masukkan elemen-elemen array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        angka.push_back(input);
    }

    int jumlahNegatif = 0;

    for (int i = 0; i < angka.size(); i++)
    {
        if (angka[i] < 0)
        {
            jumlahNegatif++;
        }
    }

    cout << "Jumlah elemen negatif: " << jumlahNegatif << endl;

    return 0;
}