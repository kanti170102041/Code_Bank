#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
long long countArrangements (int X, int K, int N , int n, int t, vector<vector<long long>> &dp) {
    if(n>N)return 1;
    if(dp[n][t]!=-1)return dp[n][t];
    if(X<=K){
        if(t==0){
            dp[n][t]=((K-1)*countArrangements(X,K,N,n+1,1,dp)%mod)%mod;
    
        }
        else{
            dp[n][t]=((K-2)*countArrangements(X,K,N,n+1,1,dp)%mod)%mod;
        }
        dp[n][t]=(dp[n][t]+countArrangements(X,K,N,n+1,0,dp)%mod)%mod;
    }
    else{
         
        if(t==0){
            dp[n][t]=(K*countArrangements(X,K,N,n+1,1,dp)%mod)%mod;
    
        }
        else{
            dp[n][t]=((K-1)*countArrangements(X,K,N,n+1,1,dp)%mod)%mod;
        }
    }
    return dp[n][t];

}
int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
        cin >> N;
        int K;
        cin >> K;
        int X;
        cin >> X;
        vector<vector<long long>> dp(N+1,vector<long long>(2,-1));
        long long out_;
        out_ = countArrangements(X, K, N,1,0, dp);
        cout << out_;
        cout << "\n";
    }
}
