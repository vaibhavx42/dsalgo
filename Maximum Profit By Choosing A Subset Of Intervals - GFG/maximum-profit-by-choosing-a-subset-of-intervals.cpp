//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int maximum_profit(int n, vector<vector<int>> &intervals) {
        // Write your code here.
        vector<int>dp(n,0);
        sort(intervals.begin(),intervals.end());
        dp[0]=intervals[0][2];
        for(int i=1;i<n;i++){
            dp[i]=intervals[i][2];
            for(int j=i-1;j>=0;j--){
                if(intervals[j][1]<=intervals[i][0])
                dp[i]=max(dp[i],dp[j]+intervals[i][2]);
            }
        }
        int ans=0;
        for(auto x:dp)
        ans=max(ans,x);
        return ans;
    }

};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> intervals(n, vector<int>(3));
        for (int i = 0; i < n; i++) {
            cin >> intervals[i][0] >> intervals[i][1] >> intervals[i][2];
        }
        Solution obj;
        cout << obj.maximum_profit(n, intervals) << endl;
    }
    return 0;
}

// } Driver Code Ends