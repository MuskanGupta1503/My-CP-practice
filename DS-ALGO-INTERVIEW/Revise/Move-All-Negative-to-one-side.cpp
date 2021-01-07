#include <bits/stdc++.h>
using namespace std;
bool comparator(int a,int b)
{
    if(a<0 && b<0)
    {
        return false;
    }
    if(a>0 && b>0)
    {
        return false;
    }
    if(a>0 && b<0)
    {
        return false;
    }
    return true;
}
int main() 
{
    int arr[]={10,-30,-20,5,-9,80,1,-70};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,comparator);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
	return 0;
}