#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int x,y;
    cin>>x>>y;
    while(x*y!=0){
        if(x>y){
            x=x%y;
        }else{
            y=y%x;
        }
    }

    if(x==0){
        cout<<y<<endl;
    }else if(y==0){
        cout<<x<<endl;
    }else{
        cout<<0<<endl;
    }
}