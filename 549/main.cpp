#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    // freopen("input.txt","r",stdin);
    int n;cin>>n;
    stack<int> s;
    string cmd;
    for(int i=1;i<=n;i++){
        cin>>cmd;
        if(cmd=="push"){
            int value;cin>>value;
            s.push(value);
        }else if(cmd=="pop"){
            if(!s.empty()){
                cout<<s.top()<<endl;
                s.pop();
            }else{
                cout<<"null"<<endl;
            }
        }
    }
    return 0;
}