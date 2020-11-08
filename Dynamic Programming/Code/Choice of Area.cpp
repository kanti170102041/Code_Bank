// https://www.geeksforgeeks.org/game-theory-choice-area/

#include <iostream>
using namespace std;
#include <bits/stdc++.h>


unordered_map<string,int> t;

int COFA(vector<vector<int>> &pg, int A, int B, int start, int timer){
    if(A<=0||B<=0)return (timer-1);
    //if(start>=3||start<0)return 0;
    string key=to_string(A);
    key+='_';
    key+=to_string(B);
    key+=to_string(start);
    if(t.find(key)!=t.end())return t[key];
    
    A=A+pg[start][0];
    B=B+pg[start][1];
    
    
    return t[key]=max(COFA(pg,A,B,(start+1)%3,timer+1),COFA(pg,A,B,start==0?2:start-1,timer+1));
    
}


int main() {
    
    int inp; // no. of test cases
    cin>>inp;
    while(inp>0){
        t.clear();
        vector<vector<int>> p(3,vector<int>(2));
        for(int i=0;i<3;i++){
            for(int j=0;j<2;j++){
                cin>>p[i][j];
            }
            
        }
        int A;
        int B;
        
        cin>>A>>B;//initial values
        int maxans=-1;
        //cout<<A<<" "<<B<<"\n";
        maxans=max(maxans,COFA(p,A,B,0,0));
        maxans=max(maxans,COFA(p,A,B,1,0));
        maxans=max(maxans,COFA(p,A,B,2,0));
        cout<<maxans<<"\n";
        maxans=0;
        inp--;
    }

	return 0;
}
