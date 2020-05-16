int mod = 1000000007; 
int power(int a , int n){
    if(n<=0||a==1)
    return 1;
    if(n==1)
    return a;
    long p = power(a,n/2);
    p=((p%mod)*(p%mod))%mod;
 
    if(n%2==1)
    return ((a%mod)*(p%mod))%mod;
    return p%mod;
}
int Solution::solve(int A, vector<int> &B) {
    long fact[1001];
    fact[0]=1;
    for(int i=1;i<1001;i++) fact[i] = ((fact[i-1]%mod)*(i%mod))%mod;
    sort(B.begin(),B.end());
    vector<int> g;
    g.push_back(B[0]-1);
    for(int i=1;i<B.size();i++){
     g.push_back(B[i]-B[i-1]-1);   
    }
    g.push_back(A-B[B.size()-1]);
    long ans = fact[A - B.size()];
    
    for(int i=1;i<g.size()-1;i++){
        ans = ((ans%mod)*(power(2,g[i]-1))%mod)%mod;
    }
    
    for(int i=0;i<g.size();i++){
        ans = ((ans%mod)*(power(fact[g[i]],mod-2)))%mod;
        
    }
    
    return ans%mod;
}
