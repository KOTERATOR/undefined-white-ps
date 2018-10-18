#include <iostream>
#include <cstring>

using namespace std;

char S[500] = {};
char S1[500] = {};
char * S2;

int main()
{
    cin >> S >> S1;
    S2 = strncat(strncat(S1, " ", strlen(S1)), S, strlen(S));
    cout << S2;

    return 0;
}