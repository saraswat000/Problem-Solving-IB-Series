#define mod 1000000007
int count(int A){
    int cc =0;
    while(A!=0){
        if(A&1) cc++;
        A=A>>1;
    }
    return cc;
}
int Solution::hammingDistance(const vector<int> &A) {
    int ans = 0;
    vector<int> v = A;
    
    
    for(int j=0;j<64;j++){
        long long int z=0,o=0;
        for(int i=0;i<v.size();i++){
            
            if(v[i]&1) o++;
            else z++;
            v[i]/=2;
        }
        ans = (ans%mod +(o*z)%mod)%mod;
    }
    return (ans*2)%mod;
}
