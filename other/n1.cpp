#include <iostream>

using namespace std;

int main()
{
    int input = 0;

    cin >> input;

    input -= 1;

    cout << (input/2000)+1 << " " << ((input % 2000) / 200) + 1 << endl;

    return 0;
}