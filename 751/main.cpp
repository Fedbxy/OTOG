#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    string s;cin>>s;
    int o=0,t=0,g=0,count=0;;
    for(int i=0;i<s.size();i++){
        if(s[i]=='O'){
            o++;
        }else if(s[i]=='T'){
            t++;
        }else if(s[i]=='G'){
            g++;
        }
    }
    while(o>=2 && t>=1 && g>=1){
        o-=2;
        t-=1;
        g-=1;
        count++;
    }
    cout<<count<<endl;
    return 0;
}