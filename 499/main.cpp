#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);

    int n,count=1;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        if(i==1){
            arr[i-1]=1;
            count+=1;
            continue;
        }
        for(int j=1;j<=i;j++){
            if(j==1){
                arr[i-1]=count;
                count+=1;
            }else{
                arr[i-j]=arr[j-2];
            }
        }
    }

    for(int i=1;i<=n;i++){
        cout<<arr[i-1]<<endl;
    }
}