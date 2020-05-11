int Solution::uniquePaths(int A, int B) {
    int dp[A][B]={0};
    for(int i=0;i<A;i++)
    dp[i][0]=1;
    for(int i=0;i<B;i++)
    dp[0][i]=1;
    for(int i=1;i<A;i++){
        for(int j=1;j<B;j++){
            dp[i][j]=dp[i-1][j]+dp[i][j-1];
        }
    }
    return dp[A-1][B-1];
}
