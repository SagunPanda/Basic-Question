#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sal, dall, rent, gross;
    cout<<"enter your salary"<<endl;
    cin>>sal;
    dall=sal*40/100;
    rent=sal*20/100;
    gross=sal-(dall+rent);
    cout<<"gross salary "<<gross <<endl;
}