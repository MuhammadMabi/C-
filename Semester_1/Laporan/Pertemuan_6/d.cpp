#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    cout << "Ganjil : ";
    do
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
        i++;
    } while (i <= 35);

    cout << endl;

    i = 1;
    cout << "Genap : ";
    do
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
        i++;
    } while (i <= 34);

    cout << endl;

    return 0;
}
