vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long sum=0,sum1=0,sn=0,sn1=0;
    long n = A.size();
    sn = (n*(n+1))/2;
    sn1 = ((sn)*((2*n)+1))/3;
    
    for(int i=0;i<n;i++){ 
        sum+=A[i];
        long sq = (long)A[i]*(long)A[i];
        sum1+=sq;
    }
    long d1 =  sn - sum;             // d1 = a - b              
    long d2 = sn1 - sum1;            // d2 = a^2 - b^2
    // a is missing number and b is repeating
    long s = d2/d1 ;                 // s = a+ b;
    long a = (d1+s)/2;
    long b = s - a;
    return vector<int> {b,a};
    
    
}
