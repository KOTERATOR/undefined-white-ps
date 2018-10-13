#include <iostream>

using namespace std;

int main()
{
    char input;

    cin >> input;

    if(isupper(input))
    {
        cout << "BIG" << endl;
    }
    else if(islower(input))
    {
        cout << "TINY" << endl;
    }
    else if(isdigit(input))
    {
        cout << "DIGIT" << endl;
    }

    return 0;
}