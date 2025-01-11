#include <stdio.h>

int findmax(int n1, int n2);
void printmax(int m);

int main()
{
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
    else
    {
        return n2;
    }
}

void printmax(int m)
{
    printf(" bilangan yang terbesar adalah :%d\n", m);
}
