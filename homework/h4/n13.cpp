#include <iostream>

#define ToDigit(c) (c - '0')

using namespace std;

int main()
{
    char input;
    char sign;
    int counter = 0;

    long n1 = 0, n2 = 0;
    long result = 0;

    cin >> input;
    while (input != '+' && input != '-')
    {
        
        n1 *= 10;
        n1 += ToDigit(input);
        cin >> input;
    }

    sign = input;

    cin >> input;
    while (input != '=')
    {
        n2 *= 10;
        n2 += ToDigit(input);
        cin >> input;
    }

    if(sign == '+')
    {
        result = n1 + n2;
    }
    else if(sign == '-')
    {
        result = n1 - n2;
    }

    cout << result << endl;

    return 0;
}