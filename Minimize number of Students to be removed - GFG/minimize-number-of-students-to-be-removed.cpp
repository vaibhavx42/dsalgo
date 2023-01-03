//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int removeStudents(int vec[], int P) {
        // code here
        vector<int> v;
       for(int i=0;i<P;i++){
           int ind = lower_bound(v.begin(),v.end(),vec[i])-v.begin();  
           //binary search to find insert index
          if(ind>=v.size()){
             v.push_back(vec[i]);
          }
         else v[ind] = vec[i];
       }
       return P-v.size();
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int H[N];
        for(int i=0; i<N; i++)
            cin>>H[i];

        Solution ob;
        cout << ob.removeStudents(H,N) << endl;
    }
    return 0;
}
// } Driver Code Ends