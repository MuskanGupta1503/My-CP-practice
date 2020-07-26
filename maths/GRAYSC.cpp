#include <cstdio>
 //https://discuss.codechef.com/t/graysc-editorial/388
#include <cstring>
 
#include <cstdlib>
 
#include <iostream>
 
using namespace std;
 
 
 
const int limit	=	64*2+10;
 
 
 
int main()
 
{
 
	int n;
 
	unsigned long long a[limit];
 
	cin >> n;
 
	if (n>=limit){
 
		puts("Yes");
 
		return 0;
 
	}
 
	for (int i=0;i<n;++i)
 
		cin >> a[i];
 
	for (int i=0;i<n;++i)
 
		for (int j=i+1;j<n;++j)
 
			for (int k=j+1;k<n;++k)
 
				for (int l=k+1;l<n;++l)
 
				if ((a[i]^a[j]^a[k]^a[l])==0){
 
					puts("Yes");
 
					return 0;
 
				}
 
	puts("No");
 
	return 0;
 
} 
