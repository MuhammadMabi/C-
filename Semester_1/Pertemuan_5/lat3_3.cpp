#include <stdio.h>

int main()
{
    int x;

    printf("Masukan bilangan : ");
    scanf("%i", &x);

    if (x > 0)
    {
        printf("Bilangan %i adalah positif", x);
    }
    else if (x < 0)
    {
        printf("Bilangan %i adalah negatif", x);
    }
    else if (x == 0)
    {
        printf("Bilangan %i adalah 0", x);
    }

    return (0);
}