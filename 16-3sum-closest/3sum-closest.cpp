class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        // first off all sort the array
        
        sort(nums.begin(), nums.end());
        
        int min_closest = INT_MAX;
        
        int sum = 0;
        
        // iterate over array and fix one element, and use two pointer approach to find the sum, b/c array is sorted
        
        for(int i = 0; i < n; i++)
        {
            // use two pointer approach
            
            int low = i + 1; 
            
            int high = n - 1;
            
            while(low < high)
            {
                // find curr_closest and upadte the min_closest accordingily
                
                int curr_closest = abs(target - (nums[i] + nums[low] + nums[high]));
                    
                if(curr_closest < min_closest)
                {
                    min_closest = curr_closest;
                        
                    sum = (nums[i] + nums[low] + nums[high]);
                }
                
                // move the pointer
                
                if(nums[i] + nums[low] + nums[high] <= target)
                {
                    low++;
                }
                else
                {
                    high--;
                }
            }
        }
        
        return sum;
    }
};