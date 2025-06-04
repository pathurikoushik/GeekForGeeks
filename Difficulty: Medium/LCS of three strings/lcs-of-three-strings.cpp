class Solution {
public:
    int lcsOf3(string& s1, string& s2, string& s3) {
        int m = s1.size(), n = s2.size(), p = s3.size();
        vector<vector<vector<int>>> dp(m + 1, vector<vector<int>>(n + 1, vector<int>(p + 1, 0)));
        
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                for (int k = 1; k <= p; k++) {
                    if (s1[i - 1] == s2[j - 1] && s2[j - 1] == s3[k - 1]) {
                        dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
                    } else {
                        dp[i][j][k] = max({dp[i - 1][j][k], dp[i][j - 1][k], dp[i][j][k - 1]});
                    }
                }
            }
        }
        
        return dp[m][n][p];
    }
};

