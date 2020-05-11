int isPrime(int a){
    if(a==2)
    return 1;
    if(a%2==0||a==1)
    return 0;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0)return 0;
    }
    return 1;
}
vector<int> Solution::primesum(int A) {
    vector<int> ans(2);
    for(int i=2;i<=A;i++){
        if(isPrime(i)&&isPrime(A-i)){
            ans[0]=i;ans[1]=A-i;
            return ans;
        }
    }
}
