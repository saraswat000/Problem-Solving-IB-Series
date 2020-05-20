vector<int> Solution::plusOne(vector<int> &A) {
    vector<int> ans;
    int in,c=1;
    for(int i=0;i<A.size();i++){
        if(A[i]!=0){
            in=i;
            break;
        }
    }
    for(int i=A.size()-1;i>=in;i--){
        ans.push_back((A[i]+c)%10);
        c = (A[i]+c)/10;
    }
    if(c)
    ans.push_back(c);
    reverse(ans.begin(),ans.end());
    return ans;
}
