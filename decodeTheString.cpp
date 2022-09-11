//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    bool isDigit(char ch)
    {
        if(ch >= '0' && ch <= '9')
        {
            return true;
        }
        return false;
    }
    string help(int &i,string s,int n)
    {
        string ans="";
        int num=0;
        for(;i<n;i++)
        {
            if(isDigit(s[i]))
            {
                num=num*10+(s[i]-'0');
            }
            else if(s[i] == '[')
            {
                i++;
                string temp=help(i,s,n);
                
                for(int j=0;j<num;j++)
                {
                    ans+=temp;
                }
                num=0;
            }
            else if(s[i] == ']')
            {
                return ans;
            }
            else
            {
                ans+=s[i];
            }
        }
        return ans;
    }
public:
    string decodedString(string s){
        int i=0;
        int n=s.size();
        return help(i,s,n);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
