#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    string s;cin>>s;
    int k;cin>>k;
    int count=0;
    for(int i=0;i<s.size()-1;i++){
        if((s[i]=='C' or s[i]=='c') and (s[i+1]=='C' or s[i+1]=='c')){
            count++;
        }
    }
    if(count>=k){
        cout<<"#OCOMisfun";
        for(int i=0;i<count-k;i++){
            cout<<" fun";
        }
        cout<<"\n";
    }else{
        cout<<"OCOM is not fun"<<"\n";
    }
    return 0;
}