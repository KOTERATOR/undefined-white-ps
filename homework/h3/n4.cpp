#include <iostream>

using namespace std;

void printNum(int num, int divider = 1000)
{
    if(divider != 0)
    {
        int out = num/divider;
        cout << out << endl;
        printNum(num % divider, divider/10);
    }
    else
    {
        return;
    }
}

int main()
{
    int input = 0;

    cin >> input;

    printNum(input);

    return 0;
}