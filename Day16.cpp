#include <bits/stdc++.h>
using namespace std;

int streak(int n)
{
    if (n % 21 == 0)
        return 1;
    while (n)
    {
        if (n % 100 == 21)
            return 1;
        n /= 10;
    }
    return 0;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        if (streak(n))
            cout << "The streak is broken!" << endl;
        else
            cout << "The streak lives still in our heart!" << endl;
    }
    return 0;
}