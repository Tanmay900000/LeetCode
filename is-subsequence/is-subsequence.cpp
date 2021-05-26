class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0, n = s.length(), m = t.length();
        while(i < n && j < m){
            if(t[j] == s[i]) i += 1;
            j += 1;
        }
        return(i == n);
    }
};
