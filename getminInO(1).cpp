//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    stack<pair<int,int>> s;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           if(s.empty() == false)
           {
               int mini=s.top().second;
               return mini;
           }
           return -1;
           //Write your code here
       }
       
       /*returns poped element from stack*/
       int pop(){
           if(s.empty() == false)
           {
               int x=s.top().first;
               s.pop();
               return x;
           }
           return -1;
           //Write your code here
       }
       
       /*push element x into the stack*/
       void push(int x)
       {
            if(s.empty())
            {
                s.push({x,x});
            }
            else
            {
                int mini=min(s.top().second,x);
                s.push({x,mini});
            }
           //Write your code here
       }
};

//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}

// } Driver Code Ends
