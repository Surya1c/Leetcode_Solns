class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int leftMax = INT_MIN;
        for (int i : left) {
            leftMax = max(leftMax, i);
        }
        int rightMin = n;
        for (int i : right) {
            rightMin = min(rightMin, i);
        }
        return max(leftMax, n - rightMin);
    }
};