// Compare the Triplets
//solution
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,a=0,b=0;
    int a0,a1,a2;
    int b0,b1,b2;
    cin>>a0>>a1>>a2;
    cin>>b0>>b1>>b2;
    if(a0 > b0) {
        a++;
    } else if(b0 > a0) {
        b++;
    }
    if(a1 > b1) {
        a++;
    } else if(b1 > a1) {
        b++;
    }
    if(a2 > b2) {
        a++;
    } else if(b2 > a2) {
        b++;
    }
    cout<<a<<" "<<b;
}
