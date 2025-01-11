#include <iostream>
using namespace std;

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";

    int totalBelanja;
    cout << "Masukkan total belanja Anda: ";
    cin >> totalBelanja;

    if (totalBelanja > 200000)
    {
        cout << "Anda mendapatkan hadiah gelas." << endl;
    }
    else
    {
        cout << "Anda tidak mendapatkan hadiah." << endl;
    }

    return 0;
}
