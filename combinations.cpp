#include <iostream>
using namespace std;
void getCombinations(int arr[], int index, int num, int reducedNum)
{
    if (reducedNum < 0)
        return;
    if (reducedNum == 0)
    {
        for (int i = 0; i < index; i++)
    	{
            cout << arr[i] << " ";
    	}
		cout << endl;
        return;
    }
    int prev = (index == 0)? 1 : arr[index-1];
    for (int k = prev; k <= num ; k++)
    {
        arr[index] = k;
        getCombinations(arr, index + 1, num, reducedNum - k);
    }
}
void findCombinations(int n)
{
    int arr[n];
    getCombinations(arr, 0, n, n);
}
int main()
{
    int n;
    cin>>n;
    findCombinations(n);
    return 0;
}
