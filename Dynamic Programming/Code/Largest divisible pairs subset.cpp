#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int LDP(vector<int>&A,int N){
    vector<int> t(N,0);
    sort(A.begin(),A.end());
    int maxi=0;
    for(int i=N-1;i>=0;i--){
        
        for(int j=i+1;j<N;j++){
            
            if(A[j]%A[i]==0){
                t[i]=t[j]+1;
                break;
            }
        }
        maxi=max(maxi,t[i]);
    }
    return maxi+1;
}


int main() {
	
	int inps;
	cin>>inps;
	while(inps>0){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i=0;i<n;i++){
	        
	        cin>>arr[i];
	    }
	    
	    cout<< LDP(arr,n)<<"\n";
	inps--;
	}
	return 0;
}
