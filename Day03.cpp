/*  Sort an array of 0s, 1s and 2s   */

void sort012(int a[], int n)
{
    int zero = 0, one = 0, two = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0) // Count the Occurrence of 0,1,2 ;'
            zero++;
        else if (a[i] == 1)
            one++;
        else
            two++;
    }

    for (int i = 0; i < n; i++)
    {
        if (zero)
        {
            a[i] = 0; // Reassign values in array as per occurrence
            zero--;   // in order of 0 , 0 , 1 , 1 , 2 , 2 .
        }
        else if (one)
        {
            a[i] = 1;
            one--;
        }
        else
            a[i] = 2;
    }
}

/*  Time  Complexity : O(n) ;
    Space Complexity : O(1) ;   */