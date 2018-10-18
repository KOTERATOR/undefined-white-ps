#include <iostream>
#include <cstring>

using namespace std;

    char input[10000] = {};

int main()
{
    int len = 0;
    char charToCount;

    cin >> len >> charToCount;


    
    cin >> input;

    int counter = 0;

    for(int i = 0; i < len; i++)
    {
        if(input[i] == charToCount)
        {
            counter++;
        }
    }

    float num = (float)counter / (float)len;

    cout << num << endl;

    return 0;
}