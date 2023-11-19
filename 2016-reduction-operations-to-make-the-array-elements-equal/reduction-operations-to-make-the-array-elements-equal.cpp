class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int ans=0;
        int idx=0;
        int c=0;
        int n=nums[nums.size()-1];
        while(idx<nums.size() and nums[idx]!=n)
        {
            int ele=nums[idx];
            //c=0;
            while(idx<nums.size() and ele==nums[idx])
            {
                c++;
                idx++;
            }
            if(idx<nums.size() and ele!=nums[idx])
            ans=ans+c;
        }
        return ans;
    }
};