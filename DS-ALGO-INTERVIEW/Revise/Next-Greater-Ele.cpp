#include <bits/stdc++.h>
using namespace std;
void printNGE(int arr[],int n)
{
    vector<int>v;
    stack<int>s;
    for(int i=n-1;i>=0;i--)
    {
        if(s.empty() || s.top()>arr[i])
        {
            if(s.empty())
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(s.top());
            }
            s.push(arr[i]);
        }
        else
        {
            while(!s.empty() && s.top()<arr[i])
            {
                s.pop();
            }
            if(s.empty())
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(s.top());
            }
            s.push(arr[i]);
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main() 
{
    int arr[] = {11, 13, 21, 3, 17, 26, 5}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    printNGE(arr, n); 
    return 0;
}