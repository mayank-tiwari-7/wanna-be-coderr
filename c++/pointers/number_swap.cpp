#include<iostream>
using namespace std;
void swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
    int main(){
        int x=10;
        int y=30;
        int* q=&x;
        int* w=&y;
        swap(x,y);
        cout<<x <<endl<<y;
    }
