class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        int max=-1;
        for (int i=0;i<candies.length;i++) {
            if (candies[i]>max) {
                max = candies[i];
            }
        }
        List<Boolean> ans = new ArrayList<Boolean>();
        for (int i=0;i<candies.length;i++) {
            if ((candies[i]+extraCandies)>=max) {
                ans.add(true);
            } else {
                ans.add(false);
            }
        }
        return ans;
    }
}