int Solution::titleToNumber(string A) {
    int col = 0;
    for(int i=1;i<A.length();i++){
        col +=pow(26,i);
    }
    for(int i=0;i<A.length();i++){
        int k = A[i]-'A';
        col+=pow(26,A.length()-i-1)*k;
    }
    return col+1;
}
