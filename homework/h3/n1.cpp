#include <iostream>

using namespace std;

int fibonacci(int num, int n1 = 1, int n2 = 0)
{
    if(num != 0)
    {
        n1 += n2;
        n2 = n1 - n2;

        num--;

        return fibonacci(num, n1, n2);
    }
    else
    {
        return n2;
    }
}

int main()
{
    int input = 0;

    cin >> input;

    cout << fibonacci(input) << endl;
    system("pause");
}