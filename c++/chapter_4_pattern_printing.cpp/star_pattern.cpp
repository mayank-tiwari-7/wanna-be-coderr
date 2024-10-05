#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<" enter no of row = ";
    cin>>x;
    int y;
    cout<<" enter no of columns = ";
    cin>>y;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}