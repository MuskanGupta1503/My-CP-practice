#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,arrn[10000],arrm[10000];
	    cin>>n>>m;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arrn[i];
	    }
	    for(int i=0;i<m;i++)
	    {
	        cin>>arrm[i];
	    }
	    sort(arrn,arrn+n);
	    sort(arrm,arrm+m);
	    int i=0,j=0,f=0;
	    while(i<n && j<m)
	    {
	        if(arrn[i]==arrm[j])
	        {
	            i++;
	            j++;
	        }
	        else if(arrn[i]<arrm[j])
	        {
	            i++;
	        }
	        else if(arrn[i]>arrm[j])
	        {
	            f=1;
	            break;
	        }
	    }
	    if(j==m && f==0)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}