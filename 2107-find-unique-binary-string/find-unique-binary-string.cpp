class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        string ans="";
        for(int i=0;i<n;i++){
            ans+= nums[i][i]=='0'?"1":"0"; 
            // since number of bits is equal to numbers in array
            // we can make sure that number is different from every element in array by atleast one bit
        }
        return ans;
    }

};