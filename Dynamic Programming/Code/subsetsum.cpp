bool subsetsum(int arr[],int sum,int n){
   vector<vector<bool>> t(2,vector<bool>(sum+1));
   for(int i=0;i<=n;i++){
       for(int j=0;j<=sum;j++){
           if(j==0)t[i%2][j]=true;
           else if(i==0)t[i%2][j]=false;
           else if(arr[i-1]<=j)t[i%2][j]=t[(i-1)%2][j-arr[i-1]]||t[(i-1)%2][j];
           else t[i%2][j]=t[(i-1)%2][j];
       }
   }
   return t[n%2][sum];
}
