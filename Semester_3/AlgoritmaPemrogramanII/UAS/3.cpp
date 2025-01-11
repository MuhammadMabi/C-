#include <iostream>
using namespace std;

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";

    int matriks[2][3];
    int transpose[3][2];

    cout << "Masukkan elemen-elemen matriks 2x3:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Matriks[" << i << "][" << j << "]: ";
            cin >> matriks[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transpose[j][i] = matriks[i][j];
        }
    }

    cout << "\nMatriks Transpos:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
