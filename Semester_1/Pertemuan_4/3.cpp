#include <iostream>
using namespace std;

int main()
{
    int A, B, T;

    A = 5;
    B = 2;

    T = A;
    A = B;
    B = T;

    cout << "Hasil A = " << A << endl;
    cout << "Hasil B = " << B << endl;
    cout << "Hasil T = " << T << endl;
}