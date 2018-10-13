#include <iostream>
using namespace std;

int main()
{   
    char input;
    int counter = 0;

    do
    {
        cin.get(input);
        if(isdigit(input))
        {
            counter++;
        }
    }
    while(input != '.');

    cout << counter << endl;

    return 0;
}