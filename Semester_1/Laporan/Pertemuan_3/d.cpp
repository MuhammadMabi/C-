#include <stdio.h>

int main()
{
    int nilai;

    printf("Masukan nilai 1-100 : ");
    scanf("%i", &nilai);

    if (nilai >= 81 && nilai <= 100)
    {
        printf("Nilai %i mendapatkan huruf A", nilai);
    }
    else if (nilai >= 71 && nilai < 81)
    {
        printf("Nilai %i mendapatkan huruf B", nilai);
    }
    else if (nilai >= 61 && nilai < 71)
    {
        printf("Nilai %i mendapatkan huruf C", nilai);
    }
    else if (nilai >= 51 && nilai < 61)
    {
        printf("Nilai %i mendapatkan huruf D", nilai);
    }
    else if (nilai < 51)
    {
        printf("Nilai %i mendapatkan huruf E", nilai);
    }
    else
    {
        printf("Nilai %i tidak berada didalam angka 1-100", nilai);
    }

    return (0);
}