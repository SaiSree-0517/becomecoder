#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,f=1;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				f=0;
			}
		}
		if(f==0)
		{
			break;
		}
	}
	if(f==1)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
}
