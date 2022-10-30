#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    string s;cin>>s;
    for(int i=0;i<s.size()/2;i++){
        int temp=s[i];
        s[i]=s[s.size()-i-1];
        s[s.size()-i-1]=temp;
    }
    cout<<s<<"\n";
    return 0;
}