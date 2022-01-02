/*  A guy with a Mental Problem , GFG  
    Problem of Day 02       */

long long minTime(long long a[], long long b[], long long n)
{
    long long even_a, odd_a, even_b, odd_b;
    even_a = even_b = odd_a = odd_b = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            even_a += a[i]; // Storing Even Indexes of Tain A
            even_b += b[i]; // Storing Even Indexes of Tain B
        }
        else
        {
            odd_a += a[i]; // Storing odd Indexes of Tain A
            odd_b += b[i]; // Storing odd Indexes of Tain B
        }
    }

    // Return the min time taken as per the given condition
    return min((even_a + odd_b), (odd_a + even_b));
}

/*  Time  Complexity : O(n) ;
    Space Complexity : O(1) ;   */