#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int x,y;
    char op;
    cin>>x>>op>>y;
    if(op=='+'){
        cout<<x+y<<endl;
    }else if(op=='-'){
        cout<<x-y<<endl;
    }else if(op=='*'){
        cout<<x*y<<endl;
    }else if(op=='/'){
        cout<<x/y<<endl;
    }
    return 0;
}