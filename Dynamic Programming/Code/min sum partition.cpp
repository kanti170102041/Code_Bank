void subsetsum(int arr[],int sum,int n, vector<vector<bool>>&t){
   for(int i=0;i<=n;i++){
       for(int j=0;j<=sum;j++){
           if(j==0)t[i][j]=true;
           else if(i==0)t[i][j]=false;
           else if(arr[i-1]<=j)t[i][j]=t[i-1][j-arr[i-1]]||t[i-1][j];
           else t[i][j]=t[i-1][j];
       }   
   }  
}
int minDiffernce(int arr[], int n){
	
	    int s=0;
	   for(int i=0;i<n;i++)
	       s+=arr[i];
	   
	   vector<vector<bool>> t(n+1,vector<bool>(s+1));
	   subsetsum(arr,s/2,n,t);
	   
	   for(int i=s/2;i>=0;i--)
	       if(t[n][i])return (s-2*i);
	} 
  
