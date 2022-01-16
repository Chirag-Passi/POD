/* GFG : Find Pair Given Difference */

bool findPair(int arr[], int size, int n)
{
    sort(arr, arr + size);
    int left = 0;
    int right = left + 1;
    while (left < size - 1)
    {
        int ans = arr[right] - arr[left];
        if (ans == n)
            return true;
        else if (ans < n)
            right++;
        else
            left++;
    }
    return false;
}

/*    Time Complexity : O(N.LogN)
      Space Comlexity : O(1)      */
