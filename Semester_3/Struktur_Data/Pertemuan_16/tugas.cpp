#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";
    int arr[] = {10, 25, 30, 45, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    cout << "Masukkan elemen yang ingin dicari: ";
    cin >> x;
    int result = linearSearch(arr, n, x);
    if (result != -1)
    {
        cout << "Elemen ditemukan di indeks: " << result << endl;
    }
    else
    {
        cout << "Elemen tidak ditemukan." << endl;
    }
    return 0;
}