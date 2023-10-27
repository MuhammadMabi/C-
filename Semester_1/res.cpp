#include <iostream>
using namespace std;

int main()
{
    std::string kamu;
    cout << "Input :";
    cin >> kamu;
    cout << "Kamu " << kamu << endl;
}

#include <stdio.h>

int main()
{
    int panjang, lebar, luas, keliling;
    printf("Masukkan panjang :");
    scanf("%d", &panjang);
    printf("Masukkan lebar :");
    scanf("%d", &lebar);
    luas = panjang * lebar;
    keliling = 2 * (panjang + lebar);
    printf("Jadi luasnya adalah : %d\n", luas);
    printf("Jadi kelilingnya adalah : %d\n", keliling);
}