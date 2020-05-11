int Solution::isPalindrome(int A) {
    int d =1;
    if(A<0)
    return false;
    int k=A;
    while((k/10)>0){
        k=k/10;
        d++;
    }
    
    while(d>0){
        // cout<<A<<" "<<d<<endl;
        
        int power=pow(10,d-1);
        // cout<<A/power<<" "<<A%10<<endl;
        if(A/power!=A%10){
            return false;
        }
        else{
            A=A%power;
            A/=10;
            d=d-2;
        }
        
    }
    return true;
}
