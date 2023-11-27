class Solution {
public:
    int knightDialer(int n) {
        int MOD = 1000000007;
        int dp[2][5] = {};
        int ret = 0;
        for (int i=0; i<5; i++) dp[0][i] = 1;
        for (int i=0; i<n-1; i++) {
            dp[1][0] = 2*dp[0][4] % MOD;
            dp[1][1] = (dp[0][2] + dp[0][4]) % MOD;
            dp[1][2] = 2*dp[0][1] % MOD;
            dp[1][4] = ((2 * dp[0][1] % MOD) + dp[0][0]) % MOD;
            for (int j = 0; j<5; j++) dp[0][j] = dp[1][j];
        }
        for (int i=0; i<10; i++) ret = (ret + dp[0][i==3||i==7||i==9?1:i==8?2:i==6?4:i==5?3:i]) % MOD;
        return ret;
    }
};