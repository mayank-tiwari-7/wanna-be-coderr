#include<stdio.h>
int main(){
    int a[2][2]={{1,23},{12,44}};
    int b[2][2]={{1,23},{12,44}};
    int c[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<2;i++){for(int j=0;j<2;j++){
        printf(" %d",c[i][j]);}
        printf("\n");
    }
}