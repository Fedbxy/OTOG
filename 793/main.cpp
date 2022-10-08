#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n,m,q;
    cin>>n>>m>>q;
    char a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=q;i++){
        int x,y;
        cin>>y>>x;
        cout<<a[y][x]<<endl;
    }
    return 0;
}