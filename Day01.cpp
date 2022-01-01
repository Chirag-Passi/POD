#include <iostream>
using namespace std;
/*  Rotate Array by K index 
    Problem of Day 01        */

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k, j;
        cin >> n >> k;
        j = k;

        int arr[n];
        int temp[k];

        // <---- Input Array ---->
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        // <---- Store K elements in temp Array ---->
        for (int i = 0; i < k; i++)
            temp[i] = arr[i];

        // <---- Shift Rest Array  ---->
        for (int i = 0; i < n - k; i++)
            arr[i] = arr[j++];

        // <---- Append Array back to arr ---->
        for (int i = n - k, j = 0; i < n; i++, j++)
            arr[i] = temp[j];

        // <---- Display Array ---->
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }

    /*  Time  Complexity : O(n) ;
        Space Complexity : O(k) ;   */
    return 0;
}