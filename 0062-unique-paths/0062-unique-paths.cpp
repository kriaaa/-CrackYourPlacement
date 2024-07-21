class Solution {
public:

    int countpaths(int first,int second,int m,int n ,vector<vector<int>>&dp)
    {
        
        if(first==m-1&& second==n-1)
        {
            return 1;
        }
     if(first>=m || second>=n)
        {
            return 0;
        }
        if(dp[first][second]!=-1)
        return dp[first][second];
        
        else
        return dp[first][second]=countpaths(first+1,second,m,n,dp)+countpaths(first,second+1,m,n,dp);

    }
    int uniquePaths(int m, int n) {
       vector<vector<int>> dp(m, vector<int>(n, -1));

        int ans=countpaths(0,0,m,n,dp);
        return ans;
        
        
    }
};