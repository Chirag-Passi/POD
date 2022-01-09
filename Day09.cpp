/* LeetCode : 167 , Two Sum II - Input Array Is Sorted */
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int s = 0 ;
        int num = numbers.size();
        int e = num - 1 ;
        while(s<=e){
            
            int ans = numbers[s]+numbers[e] ;
            
            if(ans == target)
                return{s+1,e+1};
            
            else if(ans <= target)
                s++;
            
            else
                e--; 
        }
        return {-1,-1};
    }
};

/*      Time  Complexity : O(logN) ;  
        Space Complexity : O(1) ;   */
