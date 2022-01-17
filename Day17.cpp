/* GFG : Leaders in an array */

class Solution{
    public:
    vector<int> leaders(int a[], int n){
        vector<int> ans ;
        ans.push_back(a[n-1]);
        int curr = a[n-1];
        for(int i =n-2 ; i>=0 ; i--){
            if(a[i] >= curr){
                ans.push_back(a[i]);    // Store Largest element from right side as per the condition
                curr = a[i]; 
            }
        }
        reverse(ans.begin(),ans.end());  // Reverse the vector , as we store from right side , needed from left
        return ans; 
    }
};

/*    Time  Complexity  : O(n)
      Space Complexity  : O(n)    */
