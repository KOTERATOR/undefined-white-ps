#include <iostream>

using namespace std;

bool isPrime(int num, int divider)
{
    int n = 0;
    divider--;
    if(divider > 1)
    {
        if(num % divider == 0)
        {
            return false;
        }
        else
        {
            return isPrime(num, divider);
        }
    }
    else
    {
        return true;
    }
}

int main()
{
    int input = 0;
    cin >> input;

    cout << (isPrime(input, input) ? "YES" : "NO") << endl;
}