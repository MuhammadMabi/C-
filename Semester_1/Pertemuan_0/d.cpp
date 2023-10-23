#include <stdio.h>

int main()
{
    float luas, pi, jari;
    pi = 3.1428;
    printf("Masukkan Jari-jari :");
    scanf("%f", &jari);
    // jari = 20.0;
    luas = pi * jari * jari;
    printf("luas = %f\n", luas);
}