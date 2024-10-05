#include<iostream>
using namespace std;
int main(){
    int array[]={5,4,5,6,3,9,1,3};
    int y=0;
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            for(int k=j+1;k<8;k++){
                if(array[i]+array[j]+array[k]==9){y++;}

                
            }
        }
    }    cout<<y;
}