class Solution {
    public List<Integer> addToArrayForm(int[] num, int k) {
        List<Integer> ans = new ArrayList<Integer>();
        int carry=0;
        int t;
        for (int i=num.length-1;i>=0;i--) {
            t = k%10;
            ans.add((num[i]+t+carry)%10);
            carry = (num[i]+t+carry)/10;
            k /= 10;
        }
        k += carry;
        while (k>0) {
            ans.add(k%10);
            k/=10;
        }
        Collections.reverse(ans);
        return ans;
    }
}