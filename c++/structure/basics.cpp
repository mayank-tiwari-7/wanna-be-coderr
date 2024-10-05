#include<iostream>
using namespace std;
struct basics
{
 int a;
 float b;
 char c;
};
int main(){
    struct basics lol;
    lol.a=12;
    lol.b=78;
    lol.c=78;
    cout<<lol.a<<endl;
    cout<<lol.b<<endl;
    cout<<lol.c<<endl;
return 0;
} 