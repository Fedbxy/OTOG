#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n=1;
    map<int,int> m;
    int v;
    do{
        cin>>v;
        if(v!=-1){
            m[n]=v;
            n++;
        }
    }while(v!=-1);
    do{
        cin>>v;
        if(v!=-1){
            cout<<m[v]<<endl;
        }
    }while(v!=-1);
    return 0;
}