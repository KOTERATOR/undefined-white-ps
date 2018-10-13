#include <iostream>

using namespace std;


long toBinary(long num, long m = 1)
{
    long out = 0;
    if(num != 0)
    {
        // остаток
        int remainder = num % 2;

        out += remainder*m;
        num /= 2;
        return out + toBinary(num, m*10);
    }
    else
    {
        return out;
    }
}

int main()
{
    long input = 0;

    cin >> input;

    cout << toBinary(input) << endl;
    system("pause");

}