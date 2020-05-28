vector<int> Solution::maxset(vector<int> &A) {
    long l=-1,r=-1,s=0,l1=-1,r1=-1,ans=-1,f=1;
    for(int i=0;i<A.size();i++){
        if(A[i]<0){
            if(s>ans){
                l1=l;r1=r;
                ans=s;
            }
            if(s==ans){
                if(r1-l1<r-l){
                    l1=l;r1=r;
                }
                
            }
            s=0;
            f=1;
            continue;
        }
        if(s==0&&f==1){
            l=i;
            r=i;
            f=0;
            s+=A[i];
        }
        else{
            s+=A[i];
            r++;
        }
    }
    if(s>ans){
        l1=l;r1=r;
    }
    if(s==ans){
                if(r1-l1<r-l){
                    l1=l;r1=r;
                }
            }
    vector<int> v;
    for(int i=l1;i<=r1&&r1!=-1;i++){
        v.push_back(A[i]);
    }
    return v;
}
