vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> ans;
    for(int i=0;i<A;i++){
        vector<int> v;
        for(int j=0;j<=i;j++){
            if(j==0||j==i) v.push_back(1);
            else v.push_back(ans[i-1][j]+ans[i-1][j-1]);
        }
        ans.push_back(v);
    }
    return ans;
}
