#include <bits/stdc++.h>
using namespace std;

int findit(vector<int> &A,int I,int k){
    int n;
    if(I<k)n=I+1;
    else n=k+1;
    vector<int> t(n);
    int j,maxs,ans=A[k];
    t[0]=A[0];
    for(int i=0;i<n;i++){
        
        j=i-1;
        maxs=0;
        
        while(j>=0){
            if(A[i]>A[j])
                maxs=max(maxs,t[j]);
            j--;
        }
        t[i]=A[i]+maxs;
        
        if(i==n-1){
            j=i;
            maxs=0;
            
            while(j>=0){
                if(A[k]>A[j])
                    maxs=max(maxs,t[j]);
                
                j--;
            }
            ans=maxs+A[k];
        }
    }
    return ans;
}


int main() {
	int te;
	cin>>te;
	while(te>0){
	    int n,i,k;
	    cin>>n>>i>>k;
	    vector<int> A(n);
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	        
	    }
	    cout<<findit(A,i,k)<<"\n";
	    te--;
	}
	return 0;
}
