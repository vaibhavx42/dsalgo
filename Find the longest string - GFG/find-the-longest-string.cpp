//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    string longestString(vector<string> &words)
    {
        
        string ans; // to store the  smallest string

set<string> s; // to store the strings in the array

for(int i=0;i<words.size();i++)

{

s.insert(words[i]);

}

sort(words.begin(),words.end()); // sorting the array

for(int i=0;i<words.size();i++)

{

string str=words[i];

string temp="";

bool flag=true;

for(int j=0;j<str.length();j++)

{

temp+=str[j];

if(s.find(temp)==s.end())

{

flag=false;

break;

}

}

if(flag && str.length()>ans.length())

{

ans=str;

}

}

return ans;


    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution obj;
        string w = obj.longestString(v);
        cout << w << "\n";
    }
    return 0;
}

// } Driver Code Ends