#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n;
		cin>>n;
        int arr[n], i, j, temp;
        for(i=0; i<n; i++)
        {
                cin>>arr[i];
        }
        cout<<"before reversing array arr[]=";
        for(i=0; i<n; i++)
        {
                cout<<arr[i]<<"\t";
        }
        j=i-1; 
        i=0;     
        while(i<j)
        {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                i++;
                j--;
        }
        cout<<"\n\n Reverse Array Elements arr[]=";
        for(i=0; i<n; i++)
        {
                cout<<arr[i]<<"\t";
        }
        return 0;
}
