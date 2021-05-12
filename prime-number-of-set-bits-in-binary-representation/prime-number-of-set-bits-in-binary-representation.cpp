class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int cnt,ans=0,x;
        int arr[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
        for(int i=left;i<=right;i++) {
            cnt=0;
            x=i;
            while (x>0) {

                if ((x&1) == 1) {
                    cnt++;
                }
                x = x>>1;
            }
            for(int j=0;j<15;j++) {
                if (arr[j]==cnt) {
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};