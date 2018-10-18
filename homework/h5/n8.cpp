#include <iostream>
#include <cstring>

using namespace std;

char input[500] = {};

int main()
{   
    cin.getline(input, 500);

    int len = strlen(input);

    bool awaitingForClose = false;

    for(int i = 0; i < len; i++)
    {
        if(input[i] == ')')
        {
            if(awaitingForClose)
            {
                awaitingForClose = false;
                continue;
            }
            else
            {
                cout << "NO";
                return 0;
            }
        }
        else if(input[i] == '(')
        {
            if(awaitingForClose)
            {
                cout << "NO";
                return 0;
            }
            else
            {
                awaitingForClose = true;
                continue;
            }
        }
    }

    if(awaitingForClose)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}