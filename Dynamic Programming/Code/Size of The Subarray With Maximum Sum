#include<bits/stdc++.h> 
using namespace std; 
int find(vector<int>&A){
    int n=A.size();
    vector<int> c(n+1);
    c[0]=0;
    for(int i=1;i<=n;i++){
        c[i]=c[i-1]+A[i-1];
    }
    int S=INT_MIN,maxl=0;
    for(int i=0;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(S<c[j]-c[i]){
                S=c[j]-c[i];
                maxl=j-i;
            }
            
        }
        
    }
    return maxl;

}
int main(){
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++){
    
        cin>>A[i];
        
    }
    cout<<find(A)<<"\n";
    
 return 0;   
}
