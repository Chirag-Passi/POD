/* LeetCode :88 ,  Merge Sorted Array */

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1 , j = n-1 , k = m+n-1 ;
        while(k>=0){  // Storing from back in nums1
            
            if(i<0){
                nums1[k--] = nums2[j--];
                continue;
            }
            
            if(j<0){
                nums1[k--] = nums1[i--];
                continue;
            }
            
            
            if(nums1[i] >= nums2[j])
                nums1[k--] = nums1[i--];
                
            else // (nums2[j] > nums1[i])
                nums1[k--] = nums2[j--];
        } 
        
    }
};

/*      Time Complexity: O(m+n)
        Space Complexity: O(1)      */
