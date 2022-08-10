//write a program to check weather it is leap yaer or not!
//code
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<< "enter the year";
    int y;
    cin>> y;
    if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
    {
        cout<<"this is a leap year ";

    }
    else
    {
        cout<<"this is not a leap year";
    }
    return 0;
}   

