class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int cnt=0;
        int ans=0; 
        
        for(int i=0;i<grid.size();i++) {
            int s=0;
            int e=grid[i].size()-1;
            if (grid[i][e]>=0) {
                continue;
            }
            int mid;
            while (s<=e) {
                mid = (s+e);
                if (grid[i][mid]<0) {
                    ans = mid;
                    e = mid-1;
                } else {
                    s = mid +1;
                }
            }
            cout<<i<<endl;
            cnt += (grid[i].size()-ans);
        }
        return cnt;
    }
};