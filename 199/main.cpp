#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int a,b,gcd,temp;
    cin>>a>>b;
    temp=a*b;
    while(a*b!=0){
        if(a>b){
            a%=b;
        }else{
            b%=a;
        }
    }
    if(a==0){
        gcd=b;
    }else if(b==0){
        gcd=a;
    }else{
        gcd=0;
    }
    cout<<(temp/gcd)<<endl;
    return 0;
}