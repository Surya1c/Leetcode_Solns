class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(), nums1.end()), s2(nums2.begin(), nums2.end());
        vector<vector<int>> ans(2);

        for(auto ele: s1) 
            if(s2.find(ele) == s2.end())
                ans[0].push_back(ele);

        for(auto ele: s2) 
            if(s1.find(ele) == s1.end())
                ans[1].push_back(ele);

        return ans;
    }
};