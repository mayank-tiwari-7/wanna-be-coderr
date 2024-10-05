#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v({1,3,4,6,7});
    int y=v[0];
    for(int i=0;i<v.size();i++){
        if(y<=v[i]){
          y=v[i];}
            else cout<<"no";
            
        
    }
}