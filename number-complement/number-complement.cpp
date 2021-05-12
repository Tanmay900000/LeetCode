class Solution {
public:
    int findComplement(int n) {
        int count=0,orignalNo=n;
        while(n>0)
        {
            n=(n>>1);
            count++;
        }
        int temp=(pow(2,count)-1);
        int result=(temp ^ orignalNo);
        return result;
    }
};