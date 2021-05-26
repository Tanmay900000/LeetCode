class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int s=0,e= letters.size()-1;
        int ans;
        while (s<e) {
            int mid = (s+e)/2;
            if (letters[mid]==target) {
                ans = mid;
                while (letters[ans]==letters[mid]) {
                    if (ans == letters.size()-1) {
                    ans=0;
                    } else {
                        ans++;
                    }
                }
                break;
            } else if (letters[mid]>target) {
                e = mid;
                ans = e;
                if (letters[e]<=target) {
                if (e == letters.size()-1) {
                    ans=0;
                    break;
                } 
            } 
            } else {
                s = mid+1;
                ans = s;
                if (letters[s]<=target) {
                if (s == letters.size()-1) {
                    ans=0;
                    break;
                } 
            } 
            }
        }
        return letters[ans];
        
    }
};