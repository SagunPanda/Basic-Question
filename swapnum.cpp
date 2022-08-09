//Write a Program Swap Two number....

//code
#include<bits/stdc++.h>
using namespace std;
void swap(int a, int b){
    int c=a;
    a=b;
    b=c;
    cout<<a<<" "<< b;;
    
}

int main(){
    int num1,num2;
    cout<<"enter first num";
    cin>>num1;
    cout<<"enter second num";
    cin>>num2;  
    
    cout<<"swapping of two number is"<< endl;
    swap(num1,num2);
}