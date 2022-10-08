#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);

    int n;
    bool isReversed;
    cin>>n>>isReversed;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i-1];
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            if(!isReversed){
                if(arr[j-1]>arr[j]){
                    int temp = arr[j-1];
                    arr[j-1] = arr[j];
                    arr[j] = temp;
                }
            }else{
                if(arr[j-1]<arr[j]){
                    int temp = arr[j-1];
                    arr[j-1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }

    for(int i=1;i<=n;i++){
        cout<<arr[i-1];
        if(i!=n){
            cout<<" ";
        }
    }
    cout<<endl;
}