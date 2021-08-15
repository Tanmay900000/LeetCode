class Solution {
    public int largestAltitude(int[] gain) {
        int ans=-9999;
        int sum=0;
        for (int i=0;i<gain.length;i++) {
            sum += gain[i];
            ans = Math.max(ans,sum);
        }
        ans = Math.max(ans,0);
        return ans;
    }
}