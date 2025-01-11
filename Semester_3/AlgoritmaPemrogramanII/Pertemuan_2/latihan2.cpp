#include <iostream>
using namespace std;

int findmax(int n1, int n2);
void printmax(int m);

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691" << endl;

    int i = 5;
    int j = 7;
    int k;
    k = findmax(i, j);
    printmax(k);
}

int findmax(int n1, int n2)
{
    if (n1 > n2)
    {
        return n1;
    }
    {
        return n2;
    }
}

void printmax(int m)
{
    printf("Bilangan yang terbesar adalah :%d \n", m);
}
