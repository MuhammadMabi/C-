#include <iostream>
// #include<conio>
using namespace std;

void Tukar(int &a, int &b);

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";

    int a = 8, b = -5;
    cout << "\nNilai a dan b sebelum ditukar:" << a << " & " << b;
    Tukar(a, b);
    cout << "\nNilai a dan b sesudah ditukar:" << a << " & " << b;
}

void Tukar(int &x, int &y)
{
    int z;
    z = x;
    x = y;
    y = z;
}