#include <iostream>
using namespace std;

int main()
{
    int X, Y, Z, Z1, Z2, Z3, Z4;

    X = 7;
    Y = 5;
    Z = 3; 

    Z1 = Y;
    Z2 = Z + X;
    Z3 = Z - X * Y;
    Z4 = Z % Y;

    cout << "Hasil Z1 = " << Z1 << endl;
    cout << "Hasil Z2 = " << Z2 << endl;
    cout << "Hasil Z3 = " << Z3 << endl;
    cout << "Hasil Z4 = " << Z4 << endl;

    // Z = Y;
    // Z = Z + X;
    // Z = Z - X * Y;
    // Z = Z % Y;

    // cout << "Hasil Z = " << Z << endl;
    // cout << "Hasil Z = " << Z << endl;
    // cout << "Hasil Z = " << Z << endl;
    // cout << "Hasil Z = " << Z << endl;
}