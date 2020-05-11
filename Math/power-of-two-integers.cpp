int Solution::isPower(int A) {
    if(A==1)
    return true;
    if(A<=3)
    return false;
    for(int i=2;i<=sqrt(A);i++){
        int p =A;
        int j=1;
        int pp=pow(i,j);
        while(p/pp>1){
            
            if(p%pp!=0)
            break;
            j++;
            pp=pow(i,j);
        }
        pp=pow(i,j);
        if(p/pp==1&&p%pp==0)
        return true;
    }
    return false;
}
