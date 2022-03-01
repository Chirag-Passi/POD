/*GFG : https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1 */

int *findTwoElement(int *arr, int n) {
        // Return an Arry as ans
        int *ans =  new int[2];
        
        // Using Value as index to check the visited value
        // Find duplicate Value
        for(int i=0 ; i<n ; i++){
            if(arr[abs(arr[i])-1] > 0)
                arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
            else
                ans[0] = abs(arr[i]);
        }
        
        // finding missing element 
         for(int i = 0 ; i < n ; i++){
             if(arr[i]>0)
                ans[1] = (i+1);
         }
        return ans;
    }

/*    Time Complexity: O(N)
      Space Complexity: O(N)    */


int *findTwoElement(int *arr, int n) {
        // Return an Arry as ans
        int *ans =  new int[2];
        
        // Using Value as index to check the visited value
        // Find duplicate Value
        for(int i=0 ; i<n ; i++){
            if(arr[abs(arr[i])-1] > 0)
                arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
            else
                ans[0] = abs(arr[i]);
        }
        
        // finding missing element 
         for(int i = 0 ; i < n ; i++){
             if(arr[i]>0)
                ans[1] = (i+1);
         }
        return ans;
    }

/*    Time Complexity: O(N)
      Space Complexity: O(1)    */
