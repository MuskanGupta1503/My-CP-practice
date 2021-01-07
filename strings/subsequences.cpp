#include <bits/stdc++.h>
using namespace std;
void subseq(string s,string t,int i)
{
    if(!s[i])
    {
        cout<<t<<endl;
        return;
    }
    subseq(s,t+s[i],i+1);
    subseq(s,t,i+1);
}

int main() 
{
    string s,t;
    cin>>s;
    subseq(s,t,0);
	return 0;
}