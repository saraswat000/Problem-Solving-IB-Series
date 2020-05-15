int Solution::solve(vector<int> &A, int B, int C) {
    string s = to_string(C);
    if(s.length()<B){
        return 0;
    }
    else{
        int f=1,ans=0;
        if(s.length()>B){
            
            for(int i=0;i<A.size();i++){
                if(A[i]==0){
                    f=0;
                    break;
                }
            }
            
            if(f||B==1){
                ans = pow(A.size(),B);
            }
            else{
                ans = pow(A.size(),B-1);
                ans*= (A.size()-1);
                
            }
            return ans;
        }
        for(int i=0;i<s.length();i++){
            if(f!=1)
            break;
            f=0;
            for(int j=0;j<A.size();j++){
                if(i==0&&A[j]==0&&B!=1) continue;
                if(A[j]<s[i]-'0'){
                    ans+=pow(A.size(),(s.length()-i-1));
                }
                if(A[j]==s[i]-'0')
                f=1;
            }
        }
        return ans ;
        }
        
    
}
