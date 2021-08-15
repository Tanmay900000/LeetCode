class Solution {
    public int oddCells(int m, int n, int[][] indices) {
        int ans=0;
        int[][] arr = new int[m][n];
        
        for (int i=0;i<m;i++) {
            for (int j=0;j<n;j++) {
                arr[i][j]=0;
            }
        }
        
        for (int i=0;i<indices.length;i++) {
            int t=indices[i][0];
            for (int j=0;j<n;j++) {
                arr[t][j]++;
            }
            t = indices[i][1];
            for (int j=0;j<m;j++) {
                arr[j][t]++;
            }
        }
        for (int i=0;i<m;i++) {
            for (int j=0;j<n;j++) {
                if (arr[i][j]%2 != 0) {
                    ans++;
                }
            }
        }
        return ans;
    }
}