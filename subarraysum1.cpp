#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s;
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
        for (int j=i; j<=n; j++)
        {
        	int sum=0;
            for (int k=i; k<=j; k++)
            {
                sum+=arr[k];
 			}
 			if(sum==s)
 			{
 				cout<<"YES";
			}
        }
    }
    return 0;
}
