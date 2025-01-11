#include <iostream>
#include <vector>
using namespace std;

void insertionSortDescending(vector<int> &arr);

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";

    int dataArr[] = {5, 63, 47, 91, 58, 3, 26, 100, 79, 14};
    int n = sizeof(dataArr) / sizeof(dataArr[0]);

    vector<int> data(dataArr, dataArr + n);

    cout << "Data sebelum diurutkan: ";
    for (int i = 0; i < n; i++)
    {
        cout << data[i] << " ";
    }
    cout << endl;

    insertionSortDescending(data);

    cout << "Data setelah diurutkan secara Descending: ";
    for (int i = 0; i < n; i++)
    {
        cout << data[i] << " ";
    }
    cout << endl;

    return 0;
}

void insertionSortDescending(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}