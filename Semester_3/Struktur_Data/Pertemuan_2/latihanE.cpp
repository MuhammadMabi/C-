#include <iostream>
using namespace std;

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";

    int matrix[3][4] = {
        {1, 3, 4, 5},
        {2, 4, 6, 8},
        {3, 5, 7, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
