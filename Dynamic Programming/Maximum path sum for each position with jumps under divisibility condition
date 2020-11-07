#include<bits/stdc++.h> 
using namespace std; 

void maxpath(vector<int> &A){
    int n=A.size();
    
    vector<int> t(n);
    t[0]=A[0];int j,maxval=0;
    cout<<t[0]<<" ";
    for(int i=1;i<n;i++){
        j=i-1;
        maxval=0;
        while(j>=0){
            if((i+1)%(j+1)==0){
                maxval=max(maxval,t[j]);
            }
            
            j--;
        }
        t[i]=A[i]+maxval;
        cout<<t[i]<<" ";
    }
    cout<<"\n";
    
}
int main(){
    
   int n;
   cin>>n;
   vector<int> A(n);
   for(int i=0;i<n;i++)
    cin>>A[i];
    
    maxpath(A);
  
}
