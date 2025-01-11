#include <iostream>
using namespace std;

int main()
{
    cout << "Ganjil : ";
    for (int i = 1; i <= 35; i += 2)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Genap : ";
    for (int j = 2; j <= 34; j += 2)
    {
        cout << j << " ";
    }
    cout << endl;

    return 0;
}
