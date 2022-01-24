/*   Apprach 1 : Sort   */
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort( nums.begin() , nums.end() );
        return nums[nums.size()/2];
    }
};

/*      Time Complexity: O(N.LogN)   --> To Sort The 
        Space Complexity: O(1)      
---------------------------------------------------------- */

  
/*  Apprach : Using Hash Map  */
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int , int> occ;
        
        for(int i=0 ; i<nums.size() ; i++)
            occ[nums[i]]++;
        
        
        for(auto it : occ){
            if(it.second > nums.size()/2 )
                return it.first;
        }
        
        return -1;
    }
};

/*      Time  Complexity : O(n)
        Space Complexity : O(n)     
---------------------------------------------------------- */

/*  Apprach : Boyer Moore's Voting Algorithm  */

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0 , major = -1;
        
        for(int i=0 ; i<nums.size() ; i++){
            
            if(count == 0){
                major = nums[i];
                count = 1;
            }
            else{
                if(major == nums[i] )
                    count++ ;
                else
                    count-- ;
            }
        }
        count = 0;
        for(int i=0 ; i<nums.size() ; i++){
            if(major == nums[i])
                count++;
        }
        
        if(count > nums.size()/2)
            return major;
        
        return -1;
    }
};

/*      Time  Complexity : O(n)
        Space Complexity : O(1)     */

