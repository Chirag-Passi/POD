/*LeetCodee : 1935. Maximum Number of Words You Can Type*/

class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int m = text.size();
        int n = brokenLetters.size();
        
        int cnt = 0;
        bool word = true;
        
        for( int i =0 ; i<=m ; i++ ){
            if(word && (text[i]==' ' || i==m)) {
                cnt++;
                continue;
            }
            
            if(!word && (text[i]!=' ' || i==m)) {
                continue;
            }
            
            if(!word && text[i]==' ') {
                word = true;
                continue;
            }
            
            for(int j=0 ; j<n ; j++){
                if(brokenLetters[j] == text[i]){
                    word = false;
                    break;
                }
            }
        }
        return cnt;
    }
};



/*      Time Complexity: O(m.n)
        Space Complexity: O(1)      */
