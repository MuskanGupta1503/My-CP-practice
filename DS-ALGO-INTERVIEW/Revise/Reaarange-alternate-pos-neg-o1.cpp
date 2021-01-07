#include <bits/stdc++.h>
using namespace std;
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
bool comparator(int a,int b)
{
    if(a<0 && b<0)
    return false;
    
    else if(a>0 && b>0)
    return false;
    
    else if (a>0 && b<0)
    return true;
    
    else
    return false;
    
}
int main() 
{
//  	cout<<"GfG!";
 	int arr[]={-5, 3, 4, 5, -6, -2, 8, 9,};
 	int n=sizeof(arr)/sizeof(arr[0]);
 	sort(arr,arr+n,comparator);
 	print(arr,n);
 	
 	int neg=n-1;
 	int a=arr[n-1];
 	while(a<0)
 	{
 	    neg--;
 	    a=arr[neg];
 	}
 	neg=neg+1;
 	int pos=1;
 	while(neg<=n-1)
 	{
 	    swap(arr[pos],arr[neg]);
 	    pos=pos+2;
 	    neg++;
 	}
 	print(arr,n);

	return 0;
}