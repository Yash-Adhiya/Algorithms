class Solution {
public:
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        
//         vector<vector<int>> dp(n+1,vector<int> (m+1,0));
//         for(int i=0;i<=n;i++){
//             dp[i][0] = 0;
//         }
//         for(int j=0;j<=m;j++){
//             dp[0][j] = 0;
//         }
        
        
        vector<int> prev(m+1,0),curr(m+1,0);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(word1[i-1]==word2[j-1]){
                    curr[j] = 1 + prev[j-1];
                }
                else curr[j] = max(prev[j],curr[j-1]);
            }
            prev = curr;
        }
        
        int k = prev[m];
        
        return (n-k) + (m-k);
    }
};