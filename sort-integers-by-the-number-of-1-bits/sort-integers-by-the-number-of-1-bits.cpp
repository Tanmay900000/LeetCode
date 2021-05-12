class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector< pair <int,int> > ans;
        int cnt,x;
        for(int i=0;i<arr.size();i++) {
            cnt=0;
            x=arr[i];
            while (x>0) {

                if (x&1 == 1) {
                    cnt++;
                }
                x = x>>1;
            }
            ans.push_back(make_pair(cnt,arr[i]));
            
        }
        sort(ans.begin(),ans.end());
        vector<int> sol;
        for (int i=0;i<ans.size();i++) {
            sol.push_back(ans[i].second);
        }
        return sol;
    }
};