#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int max1=INT_MIN;
    int max2=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max1)
        {
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2)
        {
            max2=arr[i];
        }
    }
    cout<<"2nd largest element in an array "<<max2;
}
