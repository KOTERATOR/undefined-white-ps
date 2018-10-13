#include <iostream>

using namespace std;

double power(double num, int pow)
{
    if(pow >= 1)
    {
        return num*power(num, --pow);
    }
    else
    {
        return 1;
    }
}

int main()
{
    double input = 0.0;
    int pow = 0;
    cin >> input >> pow;
    printf("%.6f\n", power(input, pow));
}