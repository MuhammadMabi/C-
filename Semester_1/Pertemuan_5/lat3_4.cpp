#include <stdio.h>

int main()
{
    int x;

    printf("Masukan nilai 1-100 : ");
    scanf("%i", &x);

    if (x >= 81 && x <= 100)
    {
        printf("Nilai %i mendapatkan huruf A", x);
    }
    else if (x >= 71 && x <= 81)
    {
        printf("Nilai %i mendapatkan huruf B", x);
    }
    else if (x >= 61 && x <= 71)
    {
        printf("Nilai %i mendapatkan huruf C", x);
    }
    else if (x >= 51 && x <= 61)
    {
        printf("Nilai %i mendapatkan huruf D", x);
    }
    else if (x < 51)
    {
        printf("Nilai %i mendapatkan huruf E", x);
    }
    else
    {
        printf("Nilai %i tidak berada didalam angka 1-100", x);
    }

    return (0);
}