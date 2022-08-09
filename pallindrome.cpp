//write a program to check weather a number is pallindrome or not
//code
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,rev=0,rem;
    cout<<"enter a num: ";
    cin>>n;
    do
    {
        rem=n%10;
        rev=10*rev+rem;
        n=n/10;
    }
    while (n!=0);
    {
        cout<<rev;
     }
    if(n==rev)
    cout<<"its a pallindrome num";
    else
    cout<<"not a pallindrome no";
    
        
    
}