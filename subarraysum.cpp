#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s,c=0;
	cin>>n;
   	int arr[n];
    	cout<<"enter sum\n";
    	cin>>s;
    	for(int i=0;i<n;i++)
    	{
    		cin>>arr[i];
	}
	for (int i=0; i <n; i++)
    	{
        	for (int j=i; j<n; j++)
        	{
            		for (int k=i; k<=j; k++)
            		{
                		if(arr[k]+arr[k+1]==s)
                		{
                			c++;
				}
 			}
       		 }
    	}
    	if(c!=0)
    	{
    		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO\n";
	}
    return 0;
}
