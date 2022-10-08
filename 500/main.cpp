#include <bits/stdc++.h>

using namespace std;

int n;

void print(char x,int num){
    for(int i=1;i<=num*n;i++){
        cout<<x;
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0);

    cin>>n;
    for(int i=1;i<=7*n;i++){
        if(i<=n){
            print('.',25);
        }else if(i<=n*2){
            print('.',2);
            print('#',3);
            print('.',2);
            print('#',5);
            print('.',2);
            print('#',3);
            print('.',3);
            print('#',4);
            print('.',1);
        }else if(i<=n*3){
            print('.',1);
            print('#',1);
            print('.',3);
            print('#',1);
            print('.',3);
            print('#',1);
            print('.',3);
            print('#',1);
            print('.',3);
            print('#',1);
            print('.',1);
            print('#',1);
            print('.',5);
        }else if(i<=n*4){
            print('.',1);
            print('#',1);
            print('.',3);
            print('#',1);
            print('.',3);
            print('#',1);
            print('.',3);
            print('#',1);
            print('.',3);
            print('#',1);
            print('.',1);
            print('#',1);
            print('.',1);
            print('#',3);
            print('.',1);
        }else if(i<=n*5){
            print('.',1);
            print('#',1);
            print('.',3);
            print('#',1);
            print('.',3);
            print('#',1);
            print('.',3);
            print('#',1);
            print('.',3);
            print('#',1);
            print('.',1);
            print('#',1);
            print('.',3);
            print('#',1);
            print('.',1);
        }else if(i<=n*6){
            print('.',2);
            print('#',3);
            print('.',4);
            print('#',1);
            print('.',4);
            print('#',3);
            print('.',3);
            print('#',3);
            print('.',2);
        }else{
            print('.',25);
        }
        cout<<endl;
    }
}