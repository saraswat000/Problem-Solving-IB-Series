int Solution::maxSubArray(const vector<int> &A) {
    long sum = INT_MIN , ans = INT_MIN ;
    // cout<<ans<<endl;
    for(int i=0;i<A.size();i++){
        // cout<<sum<<" "<<A[i]<<endl;
        if(sum+A[i]>0){
            sum +=A[i];
           ans = max(sum,ans);
        }
        else if(A[i]>ans){
            sum = A[i];
            ans = max(sum,ans);
        }
        else
        sum = 0;
        
        
    }
    return ans;
    
}
