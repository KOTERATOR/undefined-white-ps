#include <iostream>

using namespace std;

void printNum(int num)
{   
    if(num != 0)
    {
        cout << num % 10 << " ";
        printNum(num/=10);
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