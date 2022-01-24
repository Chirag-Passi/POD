/* GFG : Equilibrium Point  */

class Solution{
    public:
    int equilibriumPoint(long long a[], int n) {
    
        long long preSum[n], sufSum[n];
        preSum[0] = a[0];
        sufSum[n-1] = a[n-1];
        for(int i=1; i<n; i++)
           preSum[i] = a[i] + preSum[i-1];
        for(int i=n-2; i>=0; i--)
            sufSum[i] = a[i] + sufSum[i+1];
        for(int i=0; i<n; i++)
            if(preSum[i] == sufSum[i])
                return i+1;
        return -1;
    }
};
