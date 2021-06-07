#include<bits/stdc++.h>
using namespace std;
int d[100005];
int fact(int n)
{
	if(n<=1)
	   return 1;
	if(d[n]!=-1)
	   return d[n];
	return d[n]=n*fact(n-1);
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		d[i]=-1;
	}
	cout<<fact(n);
	return 0;
}
