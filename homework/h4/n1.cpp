#include <iostream>

using namespace std;

int main()
{
    int start = 0, end = 0;

    cin >> start >> end;

    for(int i = start; i <= end; i++)
    {
        cout << i << " " << (char)i << endl;
    }
}