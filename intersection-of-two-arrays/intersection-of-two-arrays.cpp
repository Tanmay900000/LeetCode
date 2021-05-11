class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        if(n1==0 || n2==0)
            return {};
			
        set<int> res;
        if(n1>n2)
        {
            sort(nums2.begin(), nums2.end());
            for(int i=0;i<n1;i++)
            {
                int s = 0, e = n2-1;
                while(s<=e)
                {
                    int mid = (s+e)/2;
                    if(nums2[mid]==nums1[i])
                    {
                        res.insert(nums2[mid]);
                        break;
                    }
                    else if (nums2[mid]>nums1[i])
                    {
                        e = mid-1;
                    }
                    else
                    {
                        s = mid+1;
                    }
                }
            }
        }
        else
        {
            sort(nums1.begin(), nums1.end());
            for(int i=0;i<n2;i++)
            {
                int s = 0, e = n1-1;
                while(s<=e)
                {
                    int mid = (s+e)/2;
                    if(nums1[mid]==nums2[i])
                    {
                        res.insert(nums1[mid]);
                        break;
                    }
                    else if (nums1[mid]>nums2[i])
                    {
                        e = mid-1;
                    }
                    else
                    {
                        s = mid+1;
                    }
                }
            }
        }
        vector<int> ans;
        for(auto &i:res)
            ans.push_back(i);
        return ans;
    }
};