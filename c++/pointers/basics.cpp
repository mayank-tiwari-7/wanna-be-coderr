#include<iostream>
using namespace std;
int main(){
int a=9;
int* b=&a;
cout<<a<<endl;
cout<<&a<<endl;
//gives the address of where datatype is stored
cout<<*b;
//gives the value of where datatype is stored
return 0;
}