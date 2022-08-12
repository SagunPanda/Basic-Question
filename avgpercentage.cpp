#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s1, s2, s3, s4, s5, avg, percentage;
    cout<<"enter the marks of sub1 "<<endl;
    cin>>s1;
    cout<<"enter the marks of sub2 "<<endl;
    cin>>s2;
    cout<<"enter the marks of sub3 "<<endl;
    cin>>s3;
    cout<<"enter the marks of sub4 "<<endl;
    cin>>s4;
    cout<<"enter the marks of sub5 "<<endl;
    cin>>s5;
    int total=s1+s2+s3+s4+s5;
    avg=total/5;
    percentage=total*0.2;
    cout<<"average marks "<< avg <<endl ;
    cout<<"percentage "<<percentage<<endl;


    return 0;

}