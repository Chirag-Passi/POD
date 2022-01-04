/*  Gone bananas     */

#include <iostream>
using namespace std;

bool primecheck(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        if (primecheck(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

/*  Time  Complexity : O(sqrt(n)) ;
    Space Complexity : O(1) ;   */