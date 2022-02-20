/*LeetCode : 58. Length of Last Word*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.length();
        int count=0;
        for(int i= len-1 ; i>=0 ; i--){
            if(s[i] != ' '){
                count++;
            }
            else if(count){
                return count;
            }
        }
        return count;
    }
};

/*      Time Complexity: O(s.size())
        Space Complexity: O(1)        */
