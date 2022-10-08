#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n;cin>>n;
    queue<int> q;
    string cmd;
    for(int i=1;i<=n;i++){
        cin>>cmd;
        if(cmd=="push"){
            int value;cin>>value;
            q.push(value);
        }else if(cmd=="pop"){
            if(!q.empty()){
                cout<<q.front()<<endl;
                q.pop();
            }else{
                cout<<"null"<<endl;
            }
        }
    }
    return 0;
}