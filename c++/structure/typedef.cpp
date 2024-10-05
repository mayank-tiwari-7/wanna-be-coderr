#include<iostream>
using namespace std;
typedef struct basics //typedef command helps in shortcut
{
 int a;
 float b;
 char c;
}ep;
int main(){
    ep lol;
    lol.a=12;
    lol.b=78;
    lol.c=78;
    cout<<lol.a<<endl;
    cout<<lol.b<<endl;
    cout<<lol.c<<endl;
return 0;
} 