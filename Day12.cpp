
/* LeetCode : 125. Valid Palindrome */
class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        for(int i=0 ; i<s.size() ; i++){
            if(isalnum(s[i])) {
                if(isupper(s[i]))
                    s[i] = tolower(s[i]);
                ans += s[i];
            }
                
        }
        
        for(int i=0 , j = ans.size()-1 ; i<=j ; i++ , j--){
            if(ans[i] != ans[j])
                return false;
        }
        return true;
    }
};

/*      Time Complexity: O(s.length)
        Space Complexity: O(ans.length)          */
