//Write a function to check weather a number is prime or not
//code
#include<bits/stdc++.h>
using namespace std;
int isPrime(int num)
{
    int i,count=0;
    for(i=1;i<=num;i++)
    {
        if(num%i==0){
            count++;
        }
    }
    return count;
}

int main(){
    int n,res;
    cout<<"enter a number";
    cin>>n;
    res=isPrime(n);
    if(res==2){
        cout<<"it is a prime number";
    }else{
        cout<<"it is not a prime number";
    }
}
