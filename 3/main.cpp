#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        string s;cin>>s;
        vector<int> a(26,0);
        int score=0;
        for(int j=0;j<s.size();j++){
            if(s[j]>='A' && s[j]<='Z'){
                a[s[j]-'A']++;
            }else if(s[j]>='a' && s[j]<='z'){
                a[s[j]-'a']++;
            }
        }
        sort(a.begin(),a.end(),greater<int>());
        for(int j=0;j<26;j++){
            if(a[j]!=0){
                score+=a[j]*(26-j);
            }else{
                break;
            }
        }
        cout<<score<<endl;
    }
    return 0;
}