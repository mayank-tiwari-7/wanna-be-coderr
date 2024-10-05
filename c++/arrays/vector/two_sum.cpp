#include<iostream>
#include<vector>
using namespace std;
int main(){
   int x;
   cout<<"no of elements = ";
   cin>>x; 
   int y;
   cout<<"no to find = ";
   cin>>y;
vector<int> v(x);
for(int i=0;i<x;i++){
    cin>>v[i];
    
}
int m=0;
for(int i=0;i<x;i++){
    for(int j=(i+1);j<x;j++){
        if(v[i]+v[j]==y){
            m++;}
        }
    }
    if(m==0) cout<<"no";
    else cout<<"yes";

return 0;
}