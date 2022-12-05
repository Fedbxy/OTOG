#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n;cin>>n;
    string s;cin>>s;
    int count=0;
    if(n==1){
        if(s[0]=='0'){
            count++;
        }
    }else{
        for(int i=n-1;i>0;i--){
            if(s[i]!=s[i-1]){
                count++;
            }
            if(i==1&&s[i-1]=='0'){
                count++;
            }
        }
    }
    cout<<count<<"\n";
    return 0;
}