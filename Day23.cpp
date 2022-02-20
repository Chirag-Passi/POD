/*LeetCode : 2011  --  Final Value of Variable After Performing Operations  */

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;
        
        for(int i=0 ; i < operations.size() ; i++ ){
            if(operations[i] == "++X" || operations[i] == "X++")
               ans++;
            else
               ans--;
        }
        return ans;
    }
};


/*      Time  Complexity : O(N) ;  
        Space Complexity : O(1) ;   */
