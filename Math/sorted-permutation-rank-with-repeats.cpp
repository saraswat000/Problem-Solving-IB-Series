#define mod 1000003
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
int Solution::findRank(string A) {
    long ans = 0;
    long fact[1005];fact[0]=1;
    for(int i=1;i<1001;i++) fact[i] = ((fact[i-1]%mod)*(i%mod))%mod;
    for(int i=0;i<A.length();i++){
        int cc = 0;
        map<char,int> m;
        for(int j=i;j<A.length();j++){
            m[A[j]]++;
        }
        for(auto it=m.begin();it!=m.end();it++){
           
            if(A[i]>(it->first)) cc+=it->second;
        }
        long p = ((cc%mod)*(fact[A.length()-i-1]%mod))%mod;
        // cout<<p<<" ";
       
        for(auto it=m.begin();it!=m.end();it++){
           
            p = ((p%mod)*(power(fact[it->second],mod-2)%mod))%mod;
        }
        // cout<<p<<endl;
        ans = (ans %mod + p%mod)%mod;
        
    }
    return (ans+1)%mod;
}
