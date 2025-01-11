#include <iostream>
using namespace std;

void hitung(int, int, int *);

int main(void)
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";
    int panjang, lebar, luas;
    cout << "Panjang = ";
    cin >> panjang;
    cout << "Lebar = ";
    cin >> lebar;

    hitung(panjang, lebar, &luas);
    cout << "Luas = " << luas << endl;
}

void hitung(int A, int B, int *luas)
{
    *luas = A * B;
}