#include<iostream>
using namespace std;
void cal(){
    int a,b,option,c;
    cout<<"enter two number = ";
    cin>>a;
    cin>>b;
    cout<<"1=add"<<endl<<"2=sub"<<endl<<"3=multiple"<<endl<<"4=divide"<<endl<<"choose option = ";
    cin>>option;
    switch (option){
        case 1:cout<<a+b;
        break;
        case 2:cout<<a-b;
        break;
        case 3:cout<<a*b;
        break;
        case 4:cout<<a/b;
        break;
    }
}
int main(){
 cal();

return 0;
}