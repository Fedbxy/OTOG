#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    long long int a,b,gcd;
    cin>>a>>b;
    long long int temp=a*b;
    while(a*b!=0){
        if(a>b){
            a%=b;
        }else{
            b%=a;
        }
    }
    if(a==0){
        gcd=b;
    }else{
        gcd=a;
    }
    cout<<(temp/gcd)<<"\n";
    return 0;
}