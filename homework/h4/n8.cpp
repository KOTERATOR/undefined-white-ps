#include <iostream>
using namespace std;

int main()
{   
    char input;
    int counter = 0;

    do
    {
        cin >> input;

        if(isalpha(input))
        {
            counter++;
        }
    }
    while(input != '.');

    cout << counter << endl;

    return 0;
}