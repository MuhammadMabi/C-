#include <iostream>
using namespace std;

// Fungsi untuk menghitung FPB
int findGCD(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Fungsi untuk menghitung KPK
int findLCM(int num1, int num2)
{
    int gcd = findGCD(num1, num2);
    int lcm = (num1 * num2) / gcd;
    return lcm;
}

int main()
{
    int num1, num2;
    cout << "Masukkan dua bilangan bulat positif yang berbeda: ";
    cin >> num1 >> num2;

    int lcmResult = findLCM(num1, num2);
    cout << "KPK dari " << num1 << " dan " << num2 << " adalah: " << lcmResult << endl;

    return 0;
}
