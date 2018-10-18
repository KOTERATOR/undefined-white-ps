#include <iostream>
#include <cstring>

using namespace std;

char S[100] = {};
char S1[100] = {};

int lastIndexOf(const char * str, char ch)
{
    int len = strlen(str);
    
    for(int i = len-1; i >= 0; i--)
    {
        if(str[i] == ch)
        {
            return i;
        }

    }
    return -1;
}

int main()
{
    cin >> S;

    

    int len = strlen(S);

    int lindex = lastIndexOf(S, 'l');

    if(lindex != -1)
    {
        for(int i = 0; i < len-1; i++)
        {
            if(i >= lindex)
            {
                S1[i] = S[i+1];
            }
            else if(i < lindex)
            {
                S1[i] = S[i];
            }
        }
    }
    else
    {
        strcpy(S1, S);
    }

    cout << S1;

    return 0;
}