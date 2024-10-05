#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5,10);
    cout<<v[5]<<endl;

v.push_back(136);//add element at last
    cout<<v[5]<<endl;
   // v.push_back(v.begin(),84); this not works
    cout<<v[0]<<endl;



}