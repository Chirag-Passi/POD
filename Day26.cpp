/* LeetCode : 925. Long Pressed Name */

class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int n = name.size();
        int t = typed.size() ;
        
        int i=0 , j=0 ;
        
        while(i<n || j<t){
            if(name[i]==typed[j]){
                i++; 
                j++;
            }
            else if(i>0 && typed[j] == name[i-1] )
                j++;
            else 
                return false;
        }
        return true;
    }
};

/*      Time Complexity   :   O(min(m,n))
        Space Complexity  :   O(1)        */ 
