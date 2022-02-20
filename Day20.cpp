/* LeetCode : 135 -  Sort Integers by The Number of 1 Bits */

int countBits(int num){
    int cnt = 0;
    while(num){
        num = num & (num-1);
        cnt++ ;
    }
    return cnt;
}

bool compare(int a , int b){
    int ca = countBits(a);
    int cb = countBits(b);
    
    if(ca == cb){
        return (a>b) ? false : true ;
    }
    else{
        return (ca > cb) ? false : true ;
    }
}

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin() , arr.end() , compare);
        return arr;
    }
};

/*      Time  Complexity : O(NlogN) ;  
        Space Complexity : O(1) ;   */
