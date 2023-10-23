#include <stdio.h>

int main()
{
    int nilai;
    printf("Masukan sebuah nilai :");
    scanf("%d", &nilai);
    if (nilai >= 70)
    {
        printf("Diatas 70 lulus");
    }
    else
    {
        printf("dibawah 70 tidak lulus");
    }
}