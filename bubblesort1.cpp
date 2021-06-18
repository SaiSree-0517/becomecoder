#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int a[],int n)
{
	for (int i=0;i<n;i++)
	{
		int s=0;
		for(int j=i+1;j<n;j++)
		{
			if (a[i]>a[j])
			{
				s++;
				swap(a[j],a[i]);
			}
		}
		if(s==0)
		{
			break;
		}
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"BEFORE SORT:\n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	bubbleSort(a,n);
	cout<<"AFTER SORT:\n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
