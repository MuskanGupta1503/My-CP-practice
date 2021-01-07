#include <bits/stdc++.h>
using namespace std;
void printNGE(int arr[],int n,vector<int>&v)
{
    // vector<int>v;
    stack<int>s;
    for(int i=n-1;i>=0;i--)
    {
        if(s.empty() || arr[s.top()]<arr[i])
        {
            if(s.empty())
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(s.top());
            }
            s.push(i);
        }
        else
        {
            while(!s.empty() && arr[s.top()]>arr[i])
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
            s.push(i);
        }
    }
    
}
void printNGE_onleft(int arr[],int n,vector<int>&v)
{
    // vector<int>v;
    stack<int>s;
    for(int i=0;i<n;i++)
    {
        if(s.empty() || arr[s.top()]<arr[i])
        {
            if(s.empty())
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(s.top());
            }
            s.push(i);
        }
        else
        {
            while(!s.empty() && arr[s.top()]>arr[i])
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
            s.push(i);
        }
    }
   
}
int main() 
{
    vector<int>vl,vr;
    int arr[] = {6, 1, 5, 4, 5, 2, 6}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    printNGE(arr, n,vr); 
    printNGE_onleft(arr, n,vl);
    reverse(vr.begin(),vr.end());
    
    for(int i=0;i<n;i++)
    {
        cout<<vr[i]<<" ";
    }
    cout<<endl;
    
    for(int i=0;i<n;i++)
    {
        cout<<vl[i]<<" ";
    }
    cout<<endl;
    
    int mx=arr[0];
    for(int i=0;i<n;i++)
    {
        if(vl[i]==-1 || vr[i]==-1)
        {
            mx=max(mx,arr[i]);
        }
        else
        {
            mx=max(mx,(arr[i]*(vr[i]-vl[i]-1)));
        }
    }
    cout<<mx<<endl;
    return 0;
}