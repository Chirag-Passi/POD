/* LeetCode  875. Koko Eating Bananas */

class Solution {
public:
    
    bool isPossible(vector<int>& piles ,int h,int mid){\
        int cnt = 0;
        for(int i = 0 ; i<piles.size() ; i++){
            cnt += ceil(1.0*piles[i]/mid);     
            
            if(cnt > h)
                return false;
        }
         return true;                                             
    }
   
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1 ;
        int end =  *max_element(piles.begin() , piles.end());
        
        while(start <= end){
            int mid = start + (end - start)/2;
            if(isPossible(piles , h, mid))
                end = mid - 1;
            else 
                start = mid + 1;
        }
        return start ;
    }
};


/*      Time  Complexity : O(NlogM) ;       --> where N is no of piles and M is range of mid (Low <= high)  
        Space Complexity : O(1) ;   */
