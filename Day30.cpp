/**/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0 , prefixSum = 0 ;
        int nums_size = nums.size();
        // taking size in a varible saves time instead of calling function each time in a for loop
        
        for(int i = 0 ; i < nums_size ; i++)
            sum += nums[i];
        
        for(int i = 0 ; i < nums_size ; i++){
            if(prefixSum == (sum - prefixSum - nums[i]))
                return i;
            prefixSum += nums[i];
        }
        return -1;
    }
};

/*    Time Complexity : O(n)
      Space Complexity : O(1)   */
