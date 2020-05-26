vector<int> Solution::flip(string A) {
   
    int l=-1,r=-1,x=0,ans = 0,p=-1;
    for(int i=0;i<A.length();i++){
        if(A[i]=='0'){
            x++;
        }
        else
        if(A[i]=='1'&&x!=0){
            if(x>ans){
               r = i-1;
               l = p+1;
               ans = x;
            }
            
            x--;
        }
        else p = i;
    }
    if(x>ans){
        
        r = A.length()-1;
        l = p+1;
        ans = x;
    }
   
    vector<int> v;
    if(ans==0){
        return v;
    }
    else{
        v.push_back(l+1);
        v.push_back(r+1);
        return v;
    }
}
