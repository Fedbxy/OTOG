#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n,price=0;
    cin>>n;
    while(n>=15){
        n-=15;
        price+=3000;
    }
    while(n>=10){
        n=0;
        price+=3000;
    }
    while(n>=5){
        n-=5;
        price+=1500;
    }
    while(n>=4){
        n=0;
        price+=1500;
    }
    while(n>=2){
        n-=2;
        price+=800;
    }
    while(n>=1){
        n=0;
        price+=500;
    }
    cout<<price<<endl;
    return 0;
}