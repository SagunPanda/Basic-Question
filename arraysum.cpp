#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum,i;
    cin>>n;
    sum=0;
    int array[n];
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    
    for(i=0;i<n;i++)
    {
        sum=sum+array[i];
    }
    cout<<sum;
    

}