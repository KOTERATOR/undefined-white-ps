#include <iostream>

using namespace std;

int main()
{   
    char input;
    int counter = 0;

    

    do
    {
        cin.get(input);
        if(isalpha(input))
        {
            counter++;
        }
    }
    while(input != '\n');

    cout << counter << endl;

    return 0;
}