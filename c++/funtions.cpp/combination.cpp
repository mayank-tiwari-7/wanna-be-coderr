#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the n = ";
    cin>>x;
    cout<<"enter the r = ";
    cin>>y;
    int a = 1;
    for(int i=1;i<=x;i++){
        a *= i;
    }
    int b=1;
    for(int j=1;j<=y;j++){
        b *= j;
    }
    int c=1;
    for(int k=1;k<=x-y;k++){
    c *= k;}
    cout<<a/(b*c);
}