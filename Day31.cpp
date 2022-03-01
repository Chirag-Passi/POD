/* LeetCode : 205. Isomorphic Strings */

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size())
            return false;
        vector<int> map_s(256,0);
        vector<int> map_t(256,0);
        for(int i = 0 ; i<s.size() ; i++){
            char ch1 = s[i];
            char ch2 = t[i];
            if( map_s[ch1] == 0 and map_t[ch2] == 0){
                map_s[ch1] = ch2;
                map_t[ch2] = ch1;
            }
            else if(map_s[ch1] != ch2 || map_t[ch2] != ch1)
                return false;
            }
        return true;
    }
};

/*    Space Complexity : O(1)
      Time Complexity  : O(n)     */
