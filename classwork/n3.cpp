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

int main()
{
    int input = 0;
    cin >> input;

    cout << sumOfDigits(input) << endl;
}