class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0,r=numbers.size()-1;
        while(l<r) {
            if(numbers.at(l)+numbers.at(r)==target){
                return{l+1,r+1};
            } else if((numbers.at(l)+numbers.at(r)) < target){
                ++l;
            } else {
                --r;
            }
        }
        return {0,0};
    }
};