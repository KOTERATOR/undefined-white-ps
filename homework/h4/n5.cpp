#include <iostream>
using namespace std;

int main()
{   
    char input;

    do
    {
        cin.get(input);
        
        if(isupper(input))
        {
            input = tolower(input);
        }
        
        cout << input;
    }
    while(input != '.');

    cout << endl;

    return 0;
}