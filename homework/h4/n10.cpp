#include <iostream>
using namespace std;

int n = 0, m = 0;


int checkTicket()
{
    char input;
    int index = -1;
    bool incorrect = false;
    for(int i = 0; i < n; i++)
    {
        cin >> input;
        if(input == '+')
        {
            if(index == -1)
            {
                index = i;
            }
            else
            {
                incorrect = true;
            }
        }
    }
    if(incorrect) return -1;
    return index;
}

int main()
{   
    int valid = 0;
    cin >> n >> m;

    int results[200];

    for(int i = 0; i < 200; i++)
    {
        results[i] = 0;
    }

    for(int i = 0; i < m; i++)
    {
        int r = checkTicket();
        if(r != -1)
        {
            results[r]++;
            valid++;
        }
    }

    double thresh = ((double)(valid*7))/100.0;
    for(int i = 0; i < n; i++)
    {
        double value = ((double)results[i]);
        if(value >= thresh)
        {
            cout << i+1 << " ";
        }
    }
    
    //cout << counter << endl;

    return 0;
}