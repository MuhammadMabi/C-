// #include <iostream>

// int main()
// {
//     struct
//     {
//         char NIM[10];
//         char Nama[20];
//         int Nilai;
//     } snilai, enilai;
// }

#include <iostream>
#include <cstring>

struct MyStruct
{
    int number;
    char *text;
};

int main()
{
    MyStruct *s = new MyStruct;
    s->text = new char[100];

    s->number = 42;
    strcpy(s->text, "Hello, World!");

    std::cout << "Number: " << s->number << std::endl;
    std::cout << "Text: " << s->text << std::endl;
   
    delete[] s->text;
    delete s;        

    return 0;
}
