int Solution::reverse(int A) {
    int p=1;
    if(A<0){
        p=-1;
        A=p*A;
    }
    long num =0,i=0;
    while(A>0){
        num=(A%10) + num*10;
        A=A/10;
        i++;
    }
    num=num*p;
    if(num<=INT_MAX&&num>=INT_MIN)
    return num;
    return 0;
}
