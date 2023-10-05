class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int numOccur = floor(n/3);
        map<int,int> mp;
        vector<int> ans;
        for(int i = 0; i<n;i++)
        {
           mp[nums[i]]++; 
        }

        for(auto it : mp)
        {
            if(it.second > numOccur)
            ans.push_back(it.first);
        }
        return ans;
    }
};