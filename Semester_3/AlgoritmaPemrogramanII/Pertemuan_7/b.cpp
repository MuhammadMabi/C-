#include <iostream>
#include <iomanip>
#include <string.h>
#include <stdlib.h>
// using namespace std;

int sort_function(const void *a, const void *b);
char list[5][4] = {"cat", "car", "cab", "cap", "can"};

int main()
{
    int x;
    qsort((void *)list, 5, sizeof(list[0]), sort_function);
    for (x = 0; x < 5; x++)
    {
        printf("%s\n", list[x]);
    }
    return 0;
}

int sort_function(const void *a, const void *b)
{
    return (strcmp((char *)a, (char *)b));
}