#include <iostream>
using namespace std;

void tampilkanGanjil(int batas)
{
    cout << "Bilangan Ganjil: ";
    for (int i = 1; i <= batas; i += 2)
    {
        cout << i << " ";
    }
    cout << endl;
}

void tampilkanGenap(int batas)
{
    cout << "Bilangan Genap: ";
    for (int i = 2; i <= batas; i += 2)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int batas;
    cout << "Masukkan batas bilangan: ";
    cin >> batas;

    tampilkanGanjil(batas);
    tampilkanGenap(batas);

    return 0;
}
