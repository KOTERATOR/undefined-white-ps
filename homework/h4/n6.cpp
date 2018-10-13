#include <iostream>
using namespace std;

int main()
{   
    char input;

    bool first = true;

    do
    {
        cin.get(input);
        
        if(first)
        {
            first = false;
            cout << "Hello, ";
        }

        if(input != '.')
        {
            cout << input;
        }
    }
    while(input != '.');

    cout << endl;

    return 0;
}