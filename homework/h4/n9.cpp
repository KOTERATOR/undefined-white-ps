#include <iostream>
using namespace std;

int main()
{   
    char input;
    int counter = 0;

    do
    {
        cin >> input;

        switch(toupper(input))
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'Y':
            counter++;
            break;
        }
    }
    while(input != '.');

    cout << counter << endl;

    return 0;
}