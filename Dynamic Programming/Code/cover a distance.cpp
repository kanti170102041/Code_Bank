#define mod 1000000007
long long countWays(int n){
    
    vector<long long int > t(n+1);
    t[0]=1;
    for(int i=1;i<=n;i++){
        long long a=0,b=0,c=0;
        if(i>=1)a=t[i-1];//option 1
        if(i>=2)b=t[i-2];//option 2
        if(i>=3)c=t[i-3];//option 3
        t[i]=(a%mod+b%mod+c%mod)%mod;
        
    }
    return t[n];
}
