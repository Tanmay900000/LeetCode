class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int sold[mat.size()];
        for (int i=0;i<mat.size();i++) {
            int s=0;
            int e = mat[i].size()-1;
            int mid;
            int ans;
            while (s<=e) {
                mid = (s+e)/2;
                
                if (mat[i][mid]==1) {
                    ans = mid;
                    s = mid+1;
                } else {
                    e = mid-1;
                }
            }
            ans = s;
            sold[i]= (ans*mat.size()+i);
        }
        sort(sold,sold+mat.size());
        cout<<endl;
        vector<int>ans(k);
        for (int i = 0; i < k; i++) {
            ans[i] = sold[i] % mat.size();
        }
        return ans;
    }
};