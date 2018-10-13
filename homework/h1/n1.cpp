#include <iostream>

using namespace std;


int main()
{
    int size = 0;

    cin >> size;

    int array[size];

    for(int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int k, n;

    cin >> k >> n;

    if(array[k-1] >= array[n-1])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}