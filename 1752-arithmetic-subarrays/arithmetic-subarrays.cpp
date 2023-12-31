class Solution {
public:
    bool isArithmatic(vector<int> nums) {
        if (nums.size() <= 1)
            return false;
        int d = nums[1] - nums[0]; // common difference
        for (int i = 2; i < nums.size(); i++) {
            if (nums[i] - nums[i - 1] != d)
                return false;
        }
        return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans(l.size(), false);
        for (int i = 0; i < l.size(); i++) {
            // Form a subarray with the given range
            vector<int> arr(nums.begin() + l[i], nums.begin() + r[i] + 1);
            // sort the sub array formed
            sort(arr.begin(), arr.end());
            // store whether it is arithmatic or not
            ans[i] = isArithmatic(arr);
        }
        return ans;
    }
};