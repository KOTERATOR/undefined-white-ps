#include <iostream>

#define ToDigit(c) (c - '0')

using namespace std;

long getNum(char &sign)
{
    long num = 0;
    bool neg = false;
    char input;
    cin >> input;
    if(input == '-')
    {
        cin >> input;
        neg = true;
    }
    while (input != '+' && input != '-' && input != '=')
    {
        num *= 10;
        num += ToDigit(input);
        cin >> input;
    }
    sign = input;
    if(neg) num *= -1;
    return num;
}

long calculate(long n1, long n2, char sign)
{
    if(sign == '+')
    {
        return n1 + n2;
    }
    else if(sign == '-')
    {
        return n1 - n2;
    }
    return 0;
}


int main()
{
    char input;
    char sign;

    int counter = 0;
    long n1 = getNum(sign);
    while(sign != '=')
    {
        char op = sign;
        long n2 = getNum(sign);
        n1 = calculate(n1, n2, op);
    }

    

    

    cout << n1 << endl;

    return 0;
}