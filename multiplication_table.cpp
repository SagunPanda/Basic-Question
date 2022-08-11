//Write a program to generate a multiplication table of any given number
//code

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num, i, res;
    cout<<"Enter the Number: ";
    cin>>num;
    for(i=1; i<=10; i++)
    {
        res = num*i;
        cout<<num<<" * "<<i<<" = "<<res;
        cout<<endl;
    }
    cout<<endl;
    return 0;
}