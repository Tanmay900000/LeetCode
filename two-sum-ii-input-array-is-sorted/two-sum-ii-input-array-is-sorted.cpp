class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int temp;
        vector<int> ans;
        for (int i=0;i<numbers.size();i++) {
            temp = (target-numbers[i]);
            auto it = find(numbers.begin()+i+1,numbers.end(), temp);
            temp = (it-numbers.begin());
            if (temp!=numbers.size()) {
                ans.push_back(i+1);
                ans.push_back(temp+1);
                return ans;
            }
        }
        return ans;
    }
};