#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int pat=x/2+1;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x;j++){
            if(i==pat or j==pat) cout<<"*";
            else cout<<" ";
        }cout<<endl;
    }
}