#include <iostream>
using namespace std;

// int mult(int x, int y, int z);

int mult(int x, int y, int z)
{
    return x * y * z;
}

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691" << endl;

    int x, y, z;
    cout << "masukan bilangan pertama :";
    cin >> x;
    cout << "masukan bilangan kedua :";
    cin >> y;
    cout << "masukan bilangan ketiga :";
    cin >> z;
    cout << "hasil perkalian bilangan itu adalah " << mult(x, y, z);

    return 0;
}