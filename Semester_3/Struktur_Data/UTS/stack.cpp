#include <iostream>
#include <stack>
using namespace std;

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";
    stack<int> s;

    s.push(5);
    s.push(10);
    s.push(15);

    while (!s.empty())
    {
        cout << "Stack top: " << s.top() << endl;
        s.pop();
    }

    return 0;
}
