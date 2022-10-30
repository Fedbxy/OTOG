#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n;cin>>n;
    for(int i=0;i<n;i++){
        char bin;
        int c,h;
        cin>>bin>>c>>bin>>h;
        if(h==2*c+2){
            cout<<"Alkane"<<"\n";
        }else if(h==2*c){
            cout<<"Alkene"<<"\n";
        }else if(h==2*c-2){
            cout<<"Alkyne"<<"\n";
        }
    }
    return 0;
}