int Solution::trailingZeroes(int A) {
    int cc = 0 , i=1;
    int power=pow(5,i);
    while(A/power>0){
        cc+=A/power;
        power*=5;
    }
    return cc;
}
