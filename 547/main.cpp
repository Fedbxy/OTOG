#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    // freopen("i.txt","r",stdin);
    string s1;
    while(cin>>s1){
        string s2;cin>>s2;
        int count=0;
        for(int i=0;i<s1.size()-s2.size()+1;i++){
            if(s2[0]==s1[i]){
                bool isBreak=false;
                for(int j=0;j<s2.size();j++){
                    if(s1[i+j]!=s2[j]){
                        isBreak=true;
                        break;
                    }
                }
                if(!isBreak){
                    count++;
                }
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}