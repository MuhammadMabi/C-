#include <iostream>
using namespace std;

void printPascal(int n)
{
    int C[n];
    for (int i = 0; i < n; i++)
    {
        C[i] = 1;
        for (int j = i - 1; j > 0; j--)
        {
            C[j] += C[j - 1];
        }
        for (int j = 0; j <= i; j++)
        {
            cout << C[j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int rows;
    cout << "Masukkan jumlah baris segitiga Pascal: ";
    cin >> rows;

    printPascal(rows);

    return 0;
}
