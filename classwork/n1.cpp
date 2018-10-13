#include <iostream>

using namespace std;

int factorial(int num)
{
    if(num > 1)
    {   
        int nextNum = num-1;
        return num*factorial(nextNum);
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
    int output = factorial(input);
    cout << output << endl;
}