#include <bits/stdc++.h> //all header files come in this
using namespace std;

int main()
{
    int n; cin>>n; //size of array
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<accumulate(arr, arr+n, 0); //calculates sum automatically function
    return 0;
}
