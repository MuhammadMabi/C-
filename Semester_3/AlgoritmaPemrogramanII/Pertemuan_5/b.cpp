#include <iostream>
using namespace std;

int main()
{
    int num[10];
    int *start, *end;
    start = num;
    end = &num[9];

    // do
    // {
    //     cout << "Masukan Bilangan :";
    //     cin >> *start;
    //     start++;
    // } while (start != end);

    while (start != end)
    {
        cout << "Masukan Bilangan :";
        cin >> *start;
        start++;
    }

    return 0;
}