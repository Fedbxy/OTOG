#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n;cin>>n;
    char first,second;
    float n_2 = n;
    if(n_2/2 == floor(n_2/2)){
        first = '*';
        second = '^';
    }else{
        first = '^';
        second = '*';
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"-";
        }
        for(int j=1;j<=i;j++){
            float temp = j;
            if(temp/2 == floor(temp/2)){
                cout<<second;
            }else{
                cout<<first;
            }
        }
        cout<<endl;
    }
}