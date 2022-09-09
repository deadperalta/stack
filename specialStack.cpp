// { Driver Code Starts
#include<iostream>
#include<stack>
using namespace std;
void push(stack<int>& s,int a);
bool isFull(stack<int>& s,int n);
bool isEmpty(stack<int>& s);
int pop(stack<int>& s);
int getMin(stack<int>& s);
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty(s)){
		    pop(s);
		}
		while(!isFull(s,n)){
			cin>>a;
			push(s,a);
		}
		cout<<getMin(s)<<endl;
	}
}// } Driver Code Ends

stack<pair<int,int>>st;

void push(stack<int>& s, int a)
{
    if(st.empty())
    {
    	st.push({a,a});
    }
    else
    {
    	int mini=min(a,st.top().second);
    	st.push({a,mini});
    }
    s.push(a);
}

bool isFull(stack<int>& s,int n){
	if(s.size() == n)
	{
	    return true;
	}
	return false;
}

bool isEmpty(stack<int>& s){
	if(s.size() == 0)
	{
	    return true;
	}
	return false;
}

int pop(stack<int>& s){
	if(isEmpty(s) == false)
	{
	    int x=s.top();
	    s.pop();
	    st.pop();
	    return x;
	}
	return -1;
}

int getMin(stack<int>& s){
	if(isEmpty(s) == false)
	{
	    int x=st.top().second;
	    return x;
	}
}
