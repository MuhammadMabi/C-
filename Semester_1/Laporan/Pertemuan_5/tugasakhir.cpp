#include <iostream>
using namespace std;

int main()
{
    int n, first = 0, second = 1, next;

    cout << "Masukkan jumlah bilangan Fibonacci yang ingin ditampilkan: ";
    cin >> n;

    cout << "Deret Fibonacci: ";

    for (int i = 0; i < n; ++i)
    {
        if (i <= 1)
            next = i;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
    }

    cout << endl;
    return 0;
}
