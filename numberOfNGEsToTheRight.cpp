#include<bits/stdc++.h>
using namespace std;

int numberOfNGE(vector<int>&arr,int i)
{
  int count=0;
  for(int j=i+1;j<n;j++)
  {
    if(arr[j] > arr[i])
    {
      count++;
    }
  }
  return count;
}

int main()
{
  vector<int> a = { 3, 4, 2, 7, 5, 8, 10, 6 };
    int Q = 2;
    vector<int> queries = { 0, 5 };
 
    for (int i = 0; i < Q; i++)
        cout << numberOfNGE(a, queries[i]) << " ";
 
    return 0;
}
