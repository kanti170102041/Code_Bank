vector<int> sieveOfEratosthenes(int n)
    {
        vector<bool> p(n+1,true);
        vector<int> ans;
        for(int i=2;i*i<=n;i++){
            
            if(p[i]==true){
             
                for(int j=i*i;j<=n;j+=i) 
                    p[j]=false;
            }   
            
        }
        
        for(int i=2;i<=n;i++){
            if(p[i]){
                ans.push_back(i);
            }
        }
        
        return ans;
    }
