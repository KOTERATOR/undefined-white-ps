#include <iostream>

using namespace std;

bool isPowerOf5(int num)
{
    if(num % 5 == 0)
    {
        if( num / 5 == 1)
        {
            return true;
        }
        else
        {
            return isPowerOf5(num/=5);
        }
    }
    else if(num == 1)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    int input = 0;

    cin >> input;

    cout << (isPowerOf5(input) ? "YES" : "NO") << endl;
    return 0;
}
