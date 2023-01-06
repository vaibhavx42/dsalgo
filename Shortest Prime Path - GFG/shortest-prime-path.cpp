//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{   
  public:
     int prime[10000];
    void seive(){
        prime[1]=0;
        prime[0]=0;
       for(int i=2;i*i<=9999;i++){
            if(prime[i]){
          for(int j=i+i;j<=9999;j+=i){
             prime[j]=0; } } 
        }
    }
  
    int shortestPath(int Num1,int Num2)
    {   
        // Complete this function using prime vector
         memset(prime,1,sizeof(prime));
        seive();
        queue<pair<int,int>> qt;
        qt.push({Num1,0});
        set<int> vis;
        vis.insert(Num1);
        int level=0;
        while(!qt.empty()){
         auto ft=qt.front();
          qt.pop();
            string temp=to_string(ft.first);
            if(ft.first==Num2){
                return ft.second;
            }
         for(int i=0;i<4;i++){
        char prev=temp[i];
    for(int c='0';c<='9';c++){
         temp[i]=c;
     if(stoi(temp)>=1000 and prime[stoi(temp)]){
        if(vis.find(stoi(temp))!=vis.end())continue;
             qt.push({stoi(temp),ft.second+1});
        vis.insert(stoi(temp));
              }
                }
                temp[i]=prev;  } 
            }
        return -1;
    }
};


//{ Driver Code Starts.
signed main()
{
    int t;
    cin>>t;
    Solution obj;
    while(t--)
    {
        int Num1,Num2;
        cin>>Num1>>Num2;
        int answer=obj.shortestPath(Num1,Num2);
        cout<<answer<<endl;
    }
}
// } Driver Code Ends