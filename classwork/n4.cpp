#include <iostream>

using namespace std;

int sumOfDigits(int num)
{   
    if(num != 0)
    {
        int digit = num % 10;
        num /= 10;
        return sumOfDigits(num) + digit;
    }
    else
    {
        return 0;
    }
}

int digitalRoot(int num)
{
    if(num > 9)
    {
        return digitalRoot(sumOfDigits(num));
    }
    else
    {
        return num;
    }
}

int main()
{
    int input = 0;

    cin >> input;
    cout << digitalRoot(input) << endl;
    system("pause");
}