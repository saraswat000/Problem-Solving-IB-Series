string Solution::convertToTitle(int A) {
    int k=A-1;
    int d=1;
    while(k-pow(26,d)>=0){
        k-=pow(26,d);
        d++;
    }
    string s="";
    for(int i=1;i<=d;i++){
        int power=pow(26,d-i);
        int p = k/power;
        // cout<<p<<endl;
        s+=('A'+p);
        
        k-=p*power;
        
    }
    return s;
    
}
