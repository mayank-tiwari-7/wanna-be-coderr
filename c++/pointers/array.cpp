#include<iostream>
using namespace std;
int main(){
    int array[]={1,5,73,8,3};
    int *a=array;
    cout<<*(a)<<endl;
    cout<<*(a+1)<<endl;
    cout<<*(a+2)<<endl;
}