#include <iostream>

using namespace std;

int numOfDigits(int num)
{   
    if(num != 0)
    {
        num /= 10;
        return numOfDigits(num) + 1;
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

    cout << numOfDigits(input) << endl;
}